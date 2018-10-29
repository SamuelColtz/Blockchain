#include<string>

#include "include/Block.h"
#include "include/TransactionData.h"

Block::Block(size_t i, TransactionData d, size_t prevHash)
{
  index = i;
  data = d;
  blockHash = generateHash();
  previousHash = prevHash;
};

size_t Block::getIndex()
{
  return index;
};

size_t Block::generateHash()
{
  std::string toHash = std::to_string(data.amount) + data.receiver+ data.sender + std::to_string(data.timeset);
  std::hash<std::string> hashTransaction;

  return hashTransaction(toHash);
};

size_t Block::getHash()
{
  return blockHash;
};

size_t Block::getPrevHash()
{
  return previousHash;
};

