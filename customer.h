#ifndef __CUSTOMER_H
#define __CUSTOMER_H

#include<string>
#include<cstdint>

enum AccountType {
  Prepaid,
  Postpaid
};

class Customer {
  std::string m_custId;
  std::string m_custName;
  std::string m_phone; 
  double m_balance;
  AccountType m_type;
  public:
  Customer();
  Customer(std::string,std::string,std::string,double);
  Customer(std::string,std::string,std::string);
  Customer(const Customer&);
  int credit(double);           //recharge or billPay
  int makeCall(double);
  double getBalance() const;
  void dispay() const;
};

#endif