package Single; 

// Simple (naive) binary multiplier

import Multiplier::*;

(* synthesize *)
	module mkSingle( Multiplier_IFC );

	typedef struct {
		Reg#(32) m1;
		Reg#(16) m2;
		Reg#(32) parsum;
		Reg#(5) valid;
	}Pipetype;

Pipetype pipe[16];

function Bit#(32) mulpipe(Tin x,Tin y);
pipe[0].m1 <={0,x};
pipe[0].m2 <=y;
pipe[0].valid <=1;
pipe[0].parsum <=0;

for(Integer i=1;i<16;i=i+1)
begin
pipe[i].m1 = (pipe[i-1].m1)<<1;
pipe[i].m2 = pipe[i-1].m2;
pipe[i].valid = pipe[i-1].valid;
if(pipe[i-1].m2[i]==0)
	pipe[i].parsum = pipe[i-1].parsum;
	else
	pipe[i].parsum = pipe[i-1].parsum+pipe[i].m1;

	end
	return pipe[15].parsum;
	endfunction

	Reg#(Bit#(10)) indicator  <- mkReg(0);
	Reg#(Bool)    present <- mkReg(True);
	Reg#(Tout)    product   <- mkReg(?);

	method Action start(Tin p, Tin q) if (present && (indicator == 0));
	present <= False;
	product <= mulpipe(p,q); 
	indicator <= 1;
	endmethod

	method Tout result() if (indicator == 1);
	return product;
	endmethod

	method Action acknowledge() if ((indicator == 1) && !present);
	present <= True;
	indicator <= 0;
	endmethod

	endmodule : mkSingle

	endpackage : Single
