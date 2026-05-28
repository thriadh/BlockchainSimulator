#include "Blockchain.h"

#include <iostream>

Blockchain::Blockchain() {
    difficulty = 1;

    Block genesisBlock(0, "Genesis Block", "0");

    genesisBlock.mineBlock(difficulty);

    chain.push_back(genesisBlock);
}

void Blockchain::addBlock(Block newBlock) {

    newBlock.mineBlock(difficulty);

    chain.push_back(newBlock);
}

void Blockchain::printBlockchain() {

    for (Block &block : chain) {
        block.printBlock();
    }
}

std::string Blockchain::getLatestHash() {
    return chain.back().getHash();
}

bool Blockchain::isChainValid() {

    for (size_t i = 1; i < chain.size(); i++) {

        Block &currentBlock = chain[i];

        Block &previousBlock = chain[i - 1];

        if (
            currentBlock.getPreviousHash()
            !=
            previousBlock.getHash()
        ) {

            return false;
        }
    }

    return true;
}