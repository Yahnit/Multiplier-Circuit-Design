package Pipe;

import Multiplier::*;
import FIFOF::*;

typedef Bit#(16) Tin;
typedef Bit#(32) Tout;

typedef struct
{
	Reg#(Tout) mplr;
	Reg#(Tin)  mcand;
	Reg#(Tout) parsum;
	Reg#(Bool) valid;
} PipeRegType;
	
(* synthesize *)
       module mkPipeline(Multiplier_IFC);
	PipeRegType pipe[16];

	Reg#(Bool) present <-mkReg(True);
	for(Integer i=0;i<16;i=i+1) 
	begin
	    pipe[i].valid   <- mkReg(False);
   	    pipe[i].mplr    <- mkReg(?);
   	    pipe[i].mcand   <- mkReg(?);
   	    pipe[i].parsum  <- mkReg(?);
	end


// 32 bit Full adder circuit

	 function Bit#(2) fa( Bit#(1) a, Bit#(1) b, Bit#(1) c );
	 let s= (a ^ b) ^ c;
	                                                              
	 let cout = ((a & b) | (c & (a ^ b)));
	  return {cout,s};
          endfunction

	   function Tout add(Tout x,Tout y,Bit#(1) c0);
	   Tout s;
	   Bit#(33) c={?,c0};
           for( Integer i=0; i<32;i=i+1) begin
           let cs =fa(x[i],y[i],c[i]);
           c[i+1]=cs[1]; s[i] =cs[0];
           end
           return {s};
           endfunction
  
   // When it is not in use I initialize all of them to zero and valid to false
	rule initialize(!present);
 	pipe[0].valid <= False;
	pipe[0].mplr<=0;
	pipe[0].mcand<=0;
	pipe[0].parsum<=0;
	endrule
	
// I do the actual implementation in here!!

    rule pipeline;
	for(Integer i=0; i<15;i=i+1) begin
	pipe[i+1].mplr <= pipe[i].mplr<<1;
	pipe[i+1].mcand <= pipe[i].mcand;
	pipe[i+1].valid <= pipe[i].valid;
// I ran a for loop from i=0 to 15,in each step i calculate the partial sum by taking into account the mcand at the stage

// I check if the i'th bit is 1 or 0 and modify partial sum accordingly! 
	if(pipe[i].mcand[i+1]==1)
	pipe[i+1].parsum <= add(pipe[i].parsum,pipe[i].mplr,0);         
	else
	pipe[i+1].parsum <= pipe[i].parsum;
	end
	endrule
	
	//By this method we actually call the multipy function
	//This is used in the test bench

	method Action start(Tout mucand,Tin muplr)if(present);
		let z={muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0],muplr[0]};
 		pipe[0].mplr <= mucand<<1;
		pipe[0].mcand <= muplr;
		pipe[0].parsum <= mucand & z;
		pipe[0].valid <= True;
	endmethod
	
	//we reset the pipeline by calling this
	method Action reset();
	present <= False;
	pipe[0].valid <= False;
	endmethod

	// we call this method to find the result
	method Tout result() if(pipe[15].valid);
	return pipe[15].parsum;
	endmethod

	endmodule :mkPipeline

	endpackage :Pipe
