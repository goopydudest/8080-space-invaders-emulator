#include <iostream>

// I'm writing this to help copy paste things into my sim switch statement
int main() {
    for (int i = 0x00; i <= 0xff; i++) {
        std::cout << "case ";
        std::cout << std::hex << i;
        std::cout << ": unimplemented_instr(state); break;" << std::endl;
    }
}
