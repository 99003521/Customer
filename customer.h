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
#define __CUSTOMER_H

#include<string>
#include<cstdint>
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
    /**
     * @brief Default Constructor for customer
     * 
     */
    Customer();
    /**
     * @brief Paramaterized constructor for Customer which includes double
     * 
     */
    Customer(std::string,std::string,std::string,double,AccountType);
    /**
     * @brief Paramaterized constructor for Customer
     * 
     */
    Customer(std::string,std::string,std::string,AccountType);
    /**
     * @brief Copy constructor for Customer
     * 
     */
    Customer(const Customer&);
    /**
     * @brief Credit Function
     * 
     */
    void credit(double);     
    /**
     * @brief Make call function
     * 
     * @return * void 
     */
    void makeCall(double);
    /**
     * @brief Get the Balance object
     * 
     * @return double 
     */

    double getBalance() const;
    /**
     * @brief Display function
     * 
     */
    void dispay() const;
};
#endif