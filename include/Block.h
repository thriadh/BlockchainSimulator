#ifndef BLOCK_H
#define BLOCK_H

#include <string>

class Block {
private:
    int index;
    std::string data;
    std::string previousHash;
    std::string hash;
    int nonce;

public:
    Block(int idx, std::string blockData, std::string prevHash);

    std::string calculateHash();

    void mineBlock(int difficulty);

    void printBlock();

    std::string getHash();

    std::string getPreviousHash();
};

#endif