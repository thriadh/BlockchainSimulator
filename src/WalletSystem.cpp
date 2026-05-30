#include "WalletSystem.h"

#include <iostream>

WalletSystem::WalletSystem() {

}

void WalletSystem::createWallet(
    std::string name,
    double initialBalance
) {
    balances[name] = initialBalance;
}

bool WalletSystem::transfer(
    std::string sender,
    std::string receiver,
    double amount
) {

    if (balances[sender] < amount) {

        std::cout << "Transaction failed: insufficient balance"
                  << std::endl;

        return false;
    }

    balances[sender] -= amount;

    balances[receiver] += amount;

    std::cout << "Transaction successful!"
              << std::endl;

    return true;
}

void WalletSystem::printBalances() {

    std::cout << "\n=== Wallet Balances ==="
              << std::endl;

    for (auto &wallet : balances) {

        std::cout << wallet.first
                  << ": "
                  << wallet.second
                  << " BTC"
                  << std::endl;
    }
}

double WalletSystem::getBalance(std::string name) {
    return balances[name];
}