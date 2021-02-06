#include "customer.h"
#include<gtest/gtest.h>
namespace{
    TEST(Customer,getBalance){
        Customer c1("1","Aman","7972770192",420.0,Prepaid);
        EXPECT_EQ(420.0, c1.getBalance());
    }
    TEST(Customer,credit){
        Customer c1("1","Aman","7972770192",420.0,Prepaid);
        c1.credit(300.0);
        EXPECT_EQ(720.0, c1.getBalance());
    }
    TEST(Customer,makecall){
        Customer c1("1","Aman","7972770192",420.0,Prepaid);
        c1.makeCall(4);
        EXPECT_EQ(380.0 , c1.getBalance());
    }

}
