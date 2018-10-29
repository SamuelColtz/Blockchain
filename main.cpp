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
  time_t timer;
  TransactionData data(200, "asdfas", "dfasdfs", time(&timer));
  Blockchain Aeonflux;
  Aeonflux.addBlock(data);
  bool result = Aeonflux.isChainValid();
  TransactionData data1(500, "asdfas", "dfasdfs", time(&timer));
  Aeonflux.addBlock(data1);
  TransactionData data2(300, "asdfas", "dfasdfs", time(&timer));
  Aeonflux.addBlock(data2);
  cout <<Aeonflux.isChainValid()<<endl;
  return 0;
}
