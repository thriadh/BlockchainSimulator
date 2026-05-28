#include "Transaction.h"

#include <iostream>

Transaction::Transaction(
    std::string from,
    std::string to,
    double value
) {
    sender = from;
    receiver = to;
    amount = value;
}

void Transaction::printTransaction() {

    std::cout << sender
              << " sends "
              << amount
              << " BTC to "
              << receiver
              << std::endl;
}

std::string Transaction::getSender() {
    return sender;
}

std::string Transaction::getReceiver() {
    return receiver;
}

double Transaction::getAmount() {
    return amount;
}