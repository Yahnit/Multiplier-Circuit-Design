package Multiplier; 

// Multiplier IFC

typedef Bit#(16) Tin;
typedef Bit#(32) Tout;


interface Multiplier_IFC;
    method Action  start (Tin m1, Tin m2);
    method Tout    result();
    method Action acknowledge();
endinterface

endpackage

/* 
function Bit#(2) fa (Bit#(1) a, Bit#(1) b, Bit#(1) c_in);
	let s = (a ^ b) ^ c_in;
	let c_out = (a & b) | (c_in & (a ^ b));
	return {c_out,s};
endfunction

function Bit#(17) add (Bit#(16) x, Bit#(16) y, Bit#(1) c); 
Bit#(16) s;
for(Integer i=0; i<16; i=i+1) begin
let cs = fa (x[i],y[i],c);
c = cs[1]; s[i] = cs[0];
end
return {c,s};
endfunction

function Bit#(32) multiply(Bit#(16) a, Bit#(16) b);
Bit#(16) prod = 0;
Bit#(16) tp = 0;
for (Integer i=0; i<16; i=i+1) begin
Bit#(16) m = (a[i]==0)? 0 : b;
Bit#(17) sum = add(m,tp,0);
prod[i] = sum[0];
tp = truncateLSB(sum);
end
return {tp,prod};

endfunction
*/
       

