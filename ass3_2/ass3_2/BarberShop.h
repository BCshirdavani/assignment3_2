//****************************************************
//
//    Author:       Beau Shirdavani
//    Date:         11-23-2017
//    Title:        Assignment 3_2
//                  BarberShop.h
//
//****************************************************

#ifndef BarberShop_h
#define BarberShop_h

#include <iostream>
#include "LinkedStack.h"
#include "Cutsomer.hpp"
using namespace std;

class BarberShop{
    LinkedStack<Customer> s1;
    LinkedStack<Customer> s2;
public:
    void addCustomer(Customer&);
    Customer nextCustomer();
};




#endif /* BarberShop_h */
