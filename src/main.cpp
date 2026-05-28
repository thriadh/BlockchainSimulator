#include <iostream>

#include "Block.h"
#include "Blockchain.h"
#include "Transaction.h"
#include "WalletSystem.h"
#include "SmartContract.h"
#include "VirtualMachine.h"

int main() {

    Blockchain myBlockchain;

    WalletSystem wallets;

    wallets.createWallet("Alice", 100);

    wallets.createWallet("Bob", 50);

    Transaction tx1("Alice", "Bob", 10);

    tx1.printTransaction();

    wallets.transfer("Alice", "Bob", 10);

    SmartContract counterContract("CounterContract");

    VirtualMachine vm;

    vm.run(counterContract, "INCREMENT");

    vm.run(counterContract, "INCREMENT");

    vm.run(counterContract, "DECREMENT");

    Block block1(
        1,
        "Smart Contract Transaction",
        myBlockchain.getLatestHash()
    );

    myBlockchain.addBlock(block1);

    myBlockchain.printBlockchain();

    wallets.printBalances();

    counterContract.printState();

    if (myBlockchain.isChainValid()) {

    std::cout << "\nBlockchain is VALID"
              << std::endl;
}

else {

    std::cout << "\nBlockchain is INVALID"
              << std::endl;
}

    return 0;
}