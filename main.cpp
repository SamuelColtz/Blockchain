#include<iostream>
#include<vector>
#include<ctime>
#include<string>
using namespace std;

#include "include/Block.h"
#include "include/Blockchain.h"
#include "include/TransactionData.h"

int main()
{
  Blockchain Aeonflux; // declaration Chain
  time_t timer; // set currrent time

  // some transactions
  TransactionData data(200, "Rick", "Morty", time(&timer));
  Aeonflux.addBlock(data);

  data = TransactionData(500, "Freddie", "Bowie", time(&timer));
  Aeonflux.addBlock(data);

  data = TransactionData(300, "Jhon", "Hunter", time(&timer));
  Aeonflux.addBlock(data);

  // someone's getting hack
  Block *hack = Aeonflux.getLastBlock();
  hack->data.amount = 2000;
  Aeonflux.isChainValid();

  return 0;
}
