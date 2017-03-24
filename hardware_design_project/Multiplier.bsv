package Multiplier; 

// Multiplier IFC

typedef Bit#(16) Tin;
typedef Bit#(32) Tout;

/*typedef struct {
	Reg#(32) m1;
	Reg#(16) m2;
	Reg#(32) parsum;
	Reg#(5) valid;
}Pipetype;*/



interface Multiplier_IFC;
method Action  start (Tin m1, Tin m2);
method Tout    result();
method Action acknowledge();
endinterface

endpackage



