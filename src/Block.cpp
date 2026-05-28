#include "Block.h"

#include <iostream>
#include <sstream>
#include <functional>

Block::Block(int idx, std::string blockData, std::string prevHash) {
    index = idx;
    data = blockData;
    previousHash = prevHash;
    nonce = 0;

    hash = calculateHash();
}

std::string Block::calculateHash() {
    std::stringstream ss;

    ss << index << data << previousHash << nonce;

    unsigned long hashValue = 0;

    for (char c : ss.str()) {
        hashValue += c;
    }

    return std::to_string(hashValue);
}

void Block::mineBlock(int difficulty) {

    for (int i = 0; i < 5; i++) {
        nonce++;
        hash = calculateHash();
    }

    std::cout << "Block mined: " << hash << std::endl;
}

void Block::printBlock() {
    std::cout << "------------------------" << std::endl;
    std::cout << "Block Index: " << index << std::endl;
    std::cout << "Data: " << data << std::endl;
    std::cout << "Previous Hash: " << previousHash << std::endl;
    std::cout << "Hash: " << hash << std::endl;
    std::cout << "Nonce: " << nonce << std::endl;
}

std::string Block::getHash() {
    return hash;
}

std::string Block::getPreviousHash() {
    return previousHash;
}