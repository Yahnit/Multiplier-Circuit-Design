package PipeTb;

// testbench for pipe

import Multiplier::*;
import Pipe::*;
import FIFOF::*;


Tout notestinputs =100;

(* synthesize *)
module mkPipeTb (Empty);

   Reg#(int) cycle      <- mkReg(0);
   Reg#(Tout) x         <- mkReg(1);
   Reg#(Tout) count     <- mkReg(1);
   Reg#(Tin) y          <- mkReg(0);
   Reg#(Bool) flag      <- mkReg(False); 
   FIFOF#(Tout) queue1  <- mkSizedFIFOF(20);
   FIFOF#(Tin) queue2   <- mkSizedFIFOF(20);
   
   // The dut
   Multiplier_IFC dut <- mkPipeline;
   
   // RULES ----------------
   rule cyclecount;
	$display("------Cycle %0d------", cycle);
	cycle <= cycle + 1;
   endrule 
   
   rule rule_tb_1 (count < notestinputs);
      $display("Rule GIVE INPUT fired");
      $display ("Test Input: x = %0d, y = %0d", x, y);
      dut.start (x, y);
      x <= x + 11;
      y <= y + 48;
	  count <= count+1;
// Now i push x and y into the queue;
	queue1.enq(x);
	queue2.enq(y);
   endrule
   
   rule rule_tb_2;
      $display("Rule TAKE OUTPUT fired");
      let z = dut.result();
	// Now i dequeue x and y from the queue
	queue1.deq;
	queue2.deq;
	
      Tout expected = extend (queue1.first) * extend (queue2.first);
      $display("    Result = %0d Expected = %0d", z, expected);
      if (z != expected) 
	begin
		$display("Error"); 
		$finish(0);
	end
      $display("*************************************************");
   endrule


   rule stop (count >= notestinputs && !queue1.notEmpty);
       $display("\t finish");
       $finish(0);
   endrule
      
   rule conclude (count>=notestinputs && !flag);
   dut.reset();
   flag <=True;
	endrule
	
endmodule : mkPipeTb

endpackage : PipeTb
