//****************************************************
//
//    Author:       Beau Shirdavani
//    Date:         11-23-2017
//    Title:        Assignment 3_2
//                  App.cpp
//
//****************************************************

#include <iostream>
#include "LinkedStack.h"
#include "Cutsomer.hpp"
#include "BarberShop.h"
using namespace std;

int main() {
    
    BarberShop shop;
    Customer customer1("MARK","KILGORE");
    Customer customer2("RICK","GRIMM");
    shop.addCustomer(customer1);
    shop.addCustomer(customer2);
    Customer nextCustomer = shop.nextCustomer();
    cout<<nextCustomer.getName()<<" is served next"<<endl;
    Customer customer3("JILL","WOLFF");
    shop.addCustomer(customer3);
    nextCustomer = shop.nextCustomer();
    cout<<nextCustomer.getName()<<" is served next"<<endl;
    nextCustomer = shop.nextCustomer();
    cout<<nextCustomer.getName()<<" is served next"<<endl;

    
    return 0;
}
