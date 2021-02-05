#include "customer.h"
Customer::Customer():id(0),name(""),phone(""),balance(0.0),type(Prepaid){

}
Customer::Customer(std::string idval,std::string nameval,std::string phoneval,double balval,AccountType typeval):id(idval),name(nameval),phone(phoneval),balance(balval),type(typeval){

}

Customer::Customer(const Customer& ref):id(ref.id),name(ref.name),phone(ref.phone),balance(ref.balance),type(ref.type){

}

void Customer::credit(double x){
    balance+=x;

}

void Customer::makeCall(double y){
    double amount;
    amount=y*10;
    balance-=amount;

}

double Customer::getBalance() const{
    return balance;

}

void Customer::dispay() const{
    std::cout<<"customer id:"+id<<",customer name:"<<name<<",customer phone number"<<phone<<",balance"<<balance;
}