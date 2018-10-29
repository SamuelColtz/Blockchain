#ifndef Block_h
#define Block_h

#include <iostream>
#include "TransactionData.h"
#include <string>

class Block
{
  private:
    size_t index;
    size_t blockHash;
    size_t previousHash;
    size_t generateHash();
  public:
    TransactionData data;
    Block(size_t, TransactionData, size_t);
    Block();
    size_t getIndex();
    size_t getHash();
    size_t getPrevHash();
};

#endif //BLOCK_H
