#include "SmartContract.h"

#include <iostream>

SmartContract::SmartContract(std::string name) {

    contractName = name;

    stateValue = 0;
}

void SmartContract::execute(std::string command) {

    if (command == "INCREMENT") {

        stateValue++;

        std::cout << "Contract executed: counter incremented"
                  << std::endl;
    }

    else if (command == "DECREMENT") {

        stateValue--;

        std::cout << "Contract executed: counter decremented"
                  << std::endl;
    }

    else {

        std::cout << "Unknown command"
                  << std::endl;
    }
}

void SmartContract::printState() {

    std::cout << "\n=== Smart Contract State ==="
              << std::endl;

    std::cout << contractName
              << " value: "
              << stateValue
              << std::endl;
}

int SmartContract::getStateValue() {
    return stateValue;
}