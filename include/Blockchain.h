#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include "TransactionData.h"
#include "Block.h"
#include<vector>


class Blockchain
{
  private:
    Block createGenesisBlock();
    std::vector<Block> chain;
  public:
    Blockchain();
    Block *getLastBlock();
    std::vector<Block> getChain();
    bool isChainValid();
    void addBlock(TransactionData);
};

#endif //BLOCKCHAIN_H
