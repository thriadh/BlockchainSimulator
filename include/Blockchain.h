#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <vector>
#include "Block.h"

class Blockchain {
private:
    std::vector<Block> chain;
    int difficulty;

public:
    Blockchain();

    void addBlock(Block newBlock);

    void printBlockchain();

   std::string getLatestHash(); 
   bool isChainValid();
};

#endif