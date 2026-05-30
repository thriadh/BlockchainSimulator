#ifndef SMARTCONTRACT_H
#define SMARTCONTRACT_H

#include <string>

class SmartContract {
private:
    std::string contractName;
    int stateValue;

public:
    SmartContract(std::string name);

    void execute(std::string command);

    int getStateValue();
    
    void printState();
};

#endif