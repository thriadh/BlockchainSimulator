#ifndef WALLETSYSTEM_H
#define WALLETSYSTEM_H

#include <map>
#include <string>

class WalletSystem {
private:
    std::map<std::string, double> balances;

public:
    WalletSystem();

    void createWallet(std::string name, double initialBalance);

    bool transfer(
        std::string sender,
        std::string receiver,
        double amount
    );

    double getBalance(std::string name);

    void printBalances();
};

#endif