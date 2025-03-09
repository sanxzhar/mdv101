#include <iostream>
#include <bitset>
#include <cstdlib>
#include "Valu.h"
#include "verilated.h"

int main(int argc, char **argv){

    Verilated::commandArgs(argc, argv);

    Valu *alu = new Valu;

    for(int i = 0; i < 2; i++){

        alu->mode = i;

        for(int sel = 0; sel < 16; sel++){
            alu->select = sel;
            std::string select_str = std::bitset<4>(sel).to_string();

            for(int j = 0; j < 1000; j++){
                
                int rand_carry_in = rand() % 2;
                alu->carry_in = rand_carry_in;

                int rand_in_a = rand() % 65536;
                alu->in_a = rand_in_a;
                std::string in_a_str = std::bitset<16>(rand_in_a).to_string();

                int rand_in_b = rand() % 65536;
                alu->in_b = rand_in_b;
                std::string in_b_str = std::bitset<16>(rand_in_b).to_string();

                alu->eval();

                std::cout<< "Test: " << j << std::endl;
                std::cout<< "mode: " << i << std::endl;
                std::cout<< "select: " << select_str << std::endl;
                std::cout<< "carry_in: " << rand_carry_in << std::endl;
                std::cout<< "in_a: " << in_a_str << std::endl;
                std::cout<< "in_b: " << in_b_str << std::endl;

                std::cout << "out: " << std::bitset<16>(alu->alu_out).to_string() << std::endl;                
                std::cout << "carry_out: " << std::bitset<1>(alu->carry_out).to_string() << std::endl;
                std::cout << "compare: " << std::bitset<1>(alu->compare).to_string() << std::endl;
            }
        }
    }

    alu->final();
    delete alu;

    return 0;
}