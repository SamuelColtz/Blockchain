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
  time_t timer;
  TransactionData data(200, "asdfas", "dfasdfs", time(&timer));
  Aeonflux.addBlock(data);

  TransactionData data1(500, "asdfas", "dfasdfs", time(&timer));
  Aeonflux.addBlock(data1);
  TransactionData data2(300, "asdfas", "dfasdfs", time(&timer));
  Aeonflux.addBlock(data2);
  Block *hack = Aeonflux.getLastBlock();
  hack->data.amount = 2000;
  cout <<Aeonflux.isChainValid()<<endl;
  return 0;
}
