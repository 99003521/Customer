#include "customer.h"
#include<gtest/gtest.h>
namespace{
    TEST(Customer,getBalance){
        Customer c1("1","Priya","8688354499",500.0,Prepaid);
        EXPECT_EQ(500.0, c1.getBalance());
    }
    TEST(Customer,credit){
        Customer c1("1","Priya","8688354499",500.0,Prepaid);
        c1.credit(300.0);
        EXPECT_EQ(800.0, c1.getBalance());
    }
    TEST(Customer,makecall){
        Customer c1("1","Priya","8688354499",500.0,Prepaid);
        c1.makeCall(4);
        EXPECT_EQ(460.0, c1.getBalance());
    }

}
