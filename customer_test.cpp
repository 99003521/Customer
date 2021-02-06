#include "customer.h"
#include<gtest/gtest.h>
namespace{
    /**
     * @brief Construct a new TEST object for checking the balance
     * 
     */
    TEST(Customer,getBalance){
        Customer c1("1","Aman","7972770192",420.0,Prepaid);
        EXPECT_EQ(420.0, c1.getBalance());
    }
    /**
     * @brief Construct a new TEST object for adding credit with the balance 
     * 
     */
    TEST(Customer,credit){
        Customer c1("1","Aman","7972770192",420.0,Prepaid);
        c1.credit(300.0);
        EXPECT_EQ(720.0, c1.getBalance());
    }
    /**
     * @brief Construct a new TEST object for getting the balance after a call has been made
     * 
     */
    TEST(Customer,makecall){
        Customer c1("1","Aman","7972770192",420.0,Prepaid);
        c1.makeCall(4);
        EXPECT_EQ(380.0 , c1.getBalance());
    }

}

