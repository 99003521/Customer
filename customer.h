/**
 * @file customer.h
 * @author Team1->Aman Kalaskar 
 *                Aiswarya P S
 *                Adharsha Mohan R
 *                Ragul Periaswamy
 * @brief 
 * @version 0.1
 * @date 2021-02-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<iostream>

enum AccountType {
    Prepaid,
    Postpaid
};

class Customer 
{
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
    
    void makeCall(double);
  

    double getBalance() const;
    
    void dispay() const;
};
