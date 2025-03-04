#include "Vand_gate.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char **argv){
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    VerilatedVcdC* vcd_trace = new VerilatedVcdC; 
    Vand_gate* and_gate = new Vand_gate;

    and_gate->trace(vcd_trace, 99);
    vcd_trace->open("and_gate_trace.vcd");

    and_gate->in0 = 0; and_gate->in1 = 0;
    and_gate->eval();
    vcd_trace->dump(10);
    std::cout << "in0=0, in1=0 -> out=" << (int)and_gate->out << std::endl;

    and_gate->in0 = 0; and_gate->in1 = 1;
    and_gate->eval();
    vcd_trace->dump(20);
    std::cout << "in0=0, in1=1 -> out=" << (int)and_gate->out << std::endl;

    and_gate->in0 = 1; and_gate->in1 = 0;
    and_gate->eval();
    vcd_trace->dump(30);
    std::cout << "in0=1, in1=0 -> out=" << (int)and_gate->out << std::endl;

    and_gate->in0 = 1; and_gate->in1 = 1;
    and_gate->eval();
    vcd_trace->dump(40);
    std::cout << "in0=1, in1=1 -> out=" << (int)and_gate->out << std::endl;

    vcd_trace->dump(50);
    vcd_trace->close();
    delete and_gate;
    return 0;
}
