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

void testGetBalance() {

    std::cout << "\n=== Get Balance Test ==="
              << std::endl;

    WalletSystem wallets;

    wallets.createWallet("Alice", 100);

    if (wallets.getBalance("Alice") == 100) {

        std::cout << "GetBalance PASSED"
                  << std::endl;
    }
    else {

        std::cout << "GetBalance FAILED"
                  << std::endl;
    }
}


void testGetStateValue() {

    std::cout << "\n=== Get State Value Test ==="
              << std::endl;

    SmartContract contract("Test");

    contract.execute("INCREMENT");

    if (contract.getStateValue() == 1) {

        std::cout << "GetStateValue PASSED"
                  << std::endl;
    }
    else {

        std::cout << "GetStateValue FAILED"
                  << std::endl;
    }
}


void testTransferFailure() {

    std::cout << "\n=== Transfer Failure Test ==="
              << std::endl;

    WalletSystem wallets;

    wallets.createWallet("Alice", 50);

    bool result = wallets.transfer(
        "Alice",
        "Bob",
        100
    );

    if (!result) {

        std::cout << "TransferFailure PASSED"
                  << std::endl;
    }
    else {

        std::cout << "TransferFailure FAILED"
                  << std::endl;
    }
}


int main() {

    testWalletSystem();

    testGetBalance();

    testTransferFailure();

    testSmartContract();

    testGetStateValue();

    testBlockchainValidation();

    return 0;
}