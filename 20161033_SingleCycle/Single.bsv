package Single; 

// Simple (naive) binary multiplier

import Multiplier::*;

(* synthesize *)
	module mkSingle( Multiplier_IFC );

	function Bit#(2) full_adder (Bit#(1) a, Bit#(1) b, Bit#(1) carry);
	let s = (a ^ b) ^ carry;
	let c_out = (a & b) | (carry & (a ^ b));
	return {c_out,s};
endfunction

function Bit#(17) add (Bit#(16) x, Bit#(16) y, Bit#(1) c); 
Bit#(16) s;
for(Integer i=0; i<16; i=i+1) begin
let cs = full_adder (x[i],y[i],c);
c = cs[1]; s[i] = cs[0];
end
return {c,s};
endfunction

function Bit#(32) multiply(Bit#(16) a, Bit#(16) b);
Bit#(16) prod = 0;
Bit#(16) temp = 0;
for (Integer i=0; i<16; i=i+1) begin
Bit#(16) m = (a[i]==0)? 0 : b;
Bit#(17) sum = add(m,temp,0);
prod[i] = sum[0];
temp = truncateLSB(sum);
end
return {temp,prod};

endfunction
Reg#(Bit#(10)) indicator  <- mkReg(0);
Reg#(Bool)    present <- mkReg(True);
Reg#(Tout)    product   <- mkReg(?);

method Action start(Tin p, Tin q) if (present && (indicator == 0));
present <= False;
product <= multiply(p,q); 
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
