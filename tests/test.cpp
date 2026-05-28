#include <iostream>

#include "../include/Blockchain.h"
#include "../include/WalletSystem.h"
#include "../include/SmartContract.h"

void testWalletSystem() {

    std::cout << "\n=== Wallet Test ==="
              << std::endl;

    WalletSystem wallets;

    wallets.createWallet("Alice", 100);

    wallets.createWallet("Bob", 50);

    bool result = wallets.transfer("Alice", "Bob", 20);

    if (result) {

        std::cout << "Wallet test PASSED"
                  << std::endl;
    }

    else {

        std::cout << "Wallet test FAILED"
                  << std::endl;
    }
}

void testSmartContract() {

    std::cout << "\n=== Smart Contract Test ==="
              << std::endl;

    SmartContract contract("TestContract");

    contract.execute("INCREMENT");

    contract.execute("INCREMENT");

    contract.execute("DECREMENT");

    contract.printState();

    std::cout << "Smart contract test COMPLETED"
              << std::endl;
}

void testBlockchainValidation() {

    std::cout << "\n=== Blockchain Validation Test ==="
              << std::endl;

    Blockchain blockchain;

    Block block1(
        1,
        "Test Block",
        blockchain.getLatestHash()
    );

    blockchain.addBlock(block1);

    if (blockchain.isChainValid()) {

        std::cout << "Blockchain validation PASSED"
                  << std::endl;
    }

    else {

        std::cout << "Blockchain validation FAILED"
                  << std::endl;
    }
}

int main() {

    testWalletSystem();

    testSmartContract();

    testBlockchainValidation();

    return 0;
}