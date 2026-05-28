#ifndef VIRTUALMACHINE_H
#define VIRTUALMACHINE_H

#include <string>

#include "SmartContract.h"

class VirtualMachine {
public:

    void run(
        SmartContract &contract,
        std::string instruction
    );
};

#endif