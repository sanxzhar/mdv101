#include <iostream>
#include <bitset>
#include "verilated.h"
#include "Vlock.h"

int main (int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vlock *l = new Vlock();

    l->reset = 1;
    l->eval();

    l->clk = 1;
    l->reset = 0;
    l->eval();

    int wrong_sequence1[] = {2, 3, 5, 2, 5, 6};
    for (int i = 0; i < 6; i++) {
        l->clk = 0;
        l->input_signal = wrong_sequence1[i];
        l->eval();
        l->clk = 1;
        l->eval();
    }

    std::cout << "Sequence: 235256" << std::endl;
    std::cout << "Result: " << std::bitset<1>(l->locked).to_string() << std::endl;

    l->reset = 1;
    l->eval();
    l->reset = 0;
    l->eval();

    int wrong_sequence2[] = {3, 2, 5, 2, 5, 6};
    for (int i = 0; i < 6; i++) {
        l->clk = 0;
        l->input_signal = wrong_sequence2[i];
        l->eval();
        l->clk = 1;
        l->eval();
    }

    std::cout << "Sequence: 325256" << std::endl;
    std::cout << "Result: " << std::bitset<1>(l->locked).to_string() << std::endl;

    l->reset = 1;
    l->eval();
    l->reset = 0;
    l->eval();

    int wrong_sequence3[] = {3, 3, 4, 2, 5, 6};
    for (int i = 0; i < 6; i++) {
        l->clk = 0;
        l->input_signal = wrong_sequence3[i];
        l->eval();
        l->clk = 1;
        l->eval();
    }

    std::cout << "Sequence: 334256" << std::endl;
    std::cout << "Result: " << std::bitset<1>(l->locked).to_string() << std::endl;

    l->reset = 1;
    l->eval();
    l->reset = 0;
    l->eval();

    int wrong_sequence4[] = {3, 3, 5, 1, 5, 6};
    for (int i = 0; i < 6; i++) {
        l->clk = 0;
        l->input_signal = wrong_sequence4[i];
        l->eval();
        l->clk = 1;
        l->eval();
    }

    std::cout << "Sequence: 335156" << std::endl;
    std::cout << "Result: " << std::bitset<1>(l->locked).to_string() << std::endl;

    l->reset = 1;
    l->eval();
    l->reset = 0;
    l->eval();

    int wrong_sequence5[] = {3, 3, 5, 2, 4, 6};
    for (int i = 0; i < 6; i++) {
        l->clk = 0;
        l->input_signal = wrong_sequence5[i];
        l->eval();
        l->clk = 1;
        l->eval();
    }

    std::cout << "Sequence: 335246" << std::endl;
    std::cout << "Result: " << std::bitset<1>(l->locked).to_string() << std::endl;

    l->reset = 1;
    l->eval();
    l->reset = 0;
    l->eval();

    int wrong_sequence6[] = {3, 3, 5, 2, 5, 5};
    for (int i = 0; i < 6; i++) {
        l->clk = 0;
        l->input_signal = wrong_sequence6[i];
        l->eval();
        l->clk = 1;
        l->eval();
    }

    std::cout << "Sequence: 335255" << std::endl;
    std::cout << "Result: " << std::bitset<1>(l->locked).to_string() << std::endl;

    l->reset = 1;
    l->eval();
    l->reset = 0;
    l->eval();

    int accept_sequence[] = {3, 3, 5, 2, 5, 6};
    for (int i = 0; i < 6; i++) {
        l->clk = 0;
        l->input_signal = accept_sequence[i];
        l->eval();
        l->clk = 1;
        l->eval();
    }

    std::cout << "Sequence: 335256" << std::endl;
    std::cout << "Locked: " << std::bitset<1>(l->locked).to_string() << std::endl;

    l->final();
    delete l;
    return 0;
}