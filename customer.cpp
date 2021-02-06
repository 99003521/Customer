/**
 * @file customer.cpp
 * @author Team1> Aman Kalaskar 
 *                Aiswarya P S
 *                Aadarsha Mohan R
 *                Ragul Periaswamy
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
    if(balance>amount){balance-=amount;}
    else{
        cout<<"Balance low.";
    }

}

double Customer::getBalance() const{
    if(balance<0){
        cout<< "Balance can't be negative"
    }
    else{return balance;}
}





/**
 * @brief In display function customer ID, Name, Phone number and balance
 * 
 */
void Customer::dispay() const{
    cout<<"Customer id:"+id<<endl;
    cout<<"\nCustomer name:"<<name<<endl;
    cout<<"\nCustomer phone number"<<phone<<endl;
    cout<<"\nBalance"<<balance<<endl;
}