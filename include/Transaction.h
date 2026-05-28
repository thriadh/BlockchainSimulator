#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction {
private:
    std::string sender;
    std::string receiver;
    double amount;

public:
    Transaction(
        std::string from,
        std::string to,
        double value
    );

    void printTransaction();

    std::string getSender();

    std::string getReceiver();

    double getAmount();
};

#endif