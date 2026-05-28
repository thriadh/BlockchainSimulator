#include "VirtualMachine.h"

#include <iostream>

void VirtualMachine::run(
    SmartContract &contract,
    std::string instruction
) {

    std::cout << "\n[VM] Executing instruction: "
              << instruction
              << std::endl;

    contract.execute(instruction);
}