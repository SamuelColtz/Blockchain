#include<vector>
#include<ctime>
#include<string>
#include<iostream>

#include "include/Block.h"
#include "include/Blockchain.h"
#include "include/TransactionData.h"

Blockchain::Blockchain()
{
  Block genesis = createGenesisBlock();
  chain.push_back(genesis);
};

std::vector<Block> Blockchain::getChain()
{
  return chain;
};

Block Blockchain::createGenesisBlock()
{
  std::time_t current;
  TransactionData data(0, "genesis", "created", time(&current));
  Block genesis(0, data, 0);
  return genesis;
};

Block *Blockchain::getLastBlock()
{
  return &chain.back();
};

void Blockchain::addBlock(TransactionData d)
{
  int index = (int)chain.size();
  std::size_t previous = (int)chain.size() > 0 ? getLastBlock()->getHash() : 0;
  chain.push_back(Block(index, d, previous));
};

bool Blockchain::isChainValid()
{
  std::cout <<sizeof(getChain())<<std::endl;
  std::vector<Block>::iterator i;
  for (i = getChain().begin(); i != getChain().end();  ++i)
  {
    Block currentBlock = *i;
    if (i != getChain().begin())
    {
      Block previousBlock = *(i-1);
      if (currentBlock.getPrevHash() != previousBlock.getHash())
      {
        std::cout<< currentBlock.getPrevHash() <<std::endl;
        return false;
      }
    }
  }
  return true;
};
