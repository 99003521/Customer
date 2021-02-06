/**
 * @file customer.cpp
 * @author Team1> Aman Kalaskar 
 *                Aishwariya P S
 *                Aadarsha Mohan R
 *                Ragul Periaswami
 * @brief This is a program of general customer's operations
 * @version 0.1
 * @date 2021-02-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "customer.h"
#include <iostream>

using namespace std;


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
/**
 * @brief Here the customer is 
 * 
 */
void Customer::dispay() const{
    cout<<"customer id:"+id<<endl;
    cout<<"\ncustomer name:"<<name<<endl;
    cout<<"\ncustomer phone number"<<phone<<endl;
    cout<<"\nbalance"<<balance<<endl;
}