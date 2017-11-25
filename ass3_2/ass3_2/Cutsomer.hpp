//
//  Cutsomer.hpp
//  ass3_2
//
//  Created by Shy on 11/24/17.
//  Copyright © 2017 Shy. All rights reserved.
//

#ifndef Cutsomer_hpp
#define Cutsomer_hpp

#include <stdio.h>
#include <iostream>
using namespace std;


class Customer{
    string fName;
    string lName;
public:
    Customer(string, string);
    Customer();
    string getFirstName();
    string getLastName();
    string getName();
    void displayName();
    friend ostream& operator<<(ostream& os, Customer& cust);
};





#endif /* Cutsomer_hpp */
