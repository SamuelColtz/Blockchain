#ifndef TransactionData_h
#define TransactionData_h

#include<string>

struct TransactionData
{
  double amount;
  std::string sender;
  std::string receiver;
  time_t timeset;
  TransactionData()
  {

  };
  TransactionData(double amnt, std::string send, std::string receiv, time_t time)
  {
    amount = amnt;
    sender = send;
    receiver = receiv;
    timeset = time;
  };
};


#endif /*TransactionData_h*/
