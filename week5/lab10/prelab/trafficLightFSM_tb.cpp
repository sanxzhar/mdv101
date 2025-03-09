#include <iostream>
#include <bitset>
#include "verilated.h"
#include "VtrafficLightFSM.h"

int main(int argc, char **argv){
    
    Verilated::commandArgs(argc, argv);
    
    VtrafficLightFSM *tl = new VtrafficLightFSM;

    tl->clk = 0;
    tl->counter = 10;

    tl->reset = 1;
    tl->reset = 0;

    for(int i = 0; i < 100; i++){

        tl->clk = !tl->clk;
        tl->eval();

        std::cout<< "i: " << i << std::endl;
        std::cout<< "clk: " << std::bitset<1>(tl->clk).to_string() << std::endl;
        std::cout<< "reset: " << std::bitset<1>(tl->reset).to_string() << std::endl;
        std::cout<< "light: " << std::bitset<3>(tl->light).to_string() << std::endl;
        
    }

    tl->final();
    delete tl;

    return 0;
}
