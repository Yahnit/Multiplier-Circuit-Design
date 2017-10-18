package SingleTb;

// testbench for Mult1

import Multiplier::*;
import Single::*;



Tin notestinputs = 100;

(* synthesize *)
module mkSingleTb (Empty);

   Reg#(int) cycle <- mkReg(0);
   Reg#(Tin) count  <- mkReg(1);
   Reg#(Tin) y  <- mkReg(5);
   Reg#(Tin) x  <- mkReg(1);
   
   // The dut
   Multiplier_IFC dut <- mkSingle;
   
   // RULES ----------------
   rule cyclecount;
	$display("------Cycle %0d------", cycle);
	cycle <= cycle + 1;
   endrule 
   
   rule rule_get_input (count < notestinputs);
      $display("Rule get_input fired");
      $display ("Test Input: x = %0d, y = %0d", x, y);
      dut.start (x, y);
      x <= x + 11;
      y <= y + 33;
	  count <= count+1;
   endrule
   
   rule rule_display_output (count <= notestinputs);
      $display("Rule display_output fired");
      let z = dut.result();
      dut.acknowledge();
      Tout expected = extend (x-11) * extend (y-33);
      $display("    Result = %0d Expected = %0d", z, expected);
      if (z != expected) 
	begin
		$display("Error"); 
		$finish(0);
	end
      $display("-------------------------------");
   endrule

  // TASK: Add a rule to invoke $finish(0) at the appropriate moment
   rule stop (count >= notestinputs);
       $display("\t finish");
       $finish(0);
   endrule
      
   
endmodule : mkSingleTb

endpackage : SingleTb
