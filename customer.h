#include<iostream>
enum AccountType {
Prepaid,
Postpaid
};
class Customer {
std::string id;
std::string name;
std::string phone;
double balance;
AccountType type;
public:
Customer();
Customer(std::string,std::string,std::string,double,AccountType);
Customer(std::string,std::string,std::string,AccountType);
Customer(const Customer&);
void credit(double);
//recharge or billPay
void makeCall(double);
double getBalance() const;
void dispay() const;
};