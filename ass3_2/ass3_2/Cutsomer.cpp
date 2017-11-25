//
//  Cutsomer.cpp
//  ass3_2
//
//  Created by Shy on 11/24/17.
//  Copyright © 2017 Shy. All rights reserved.
//

#include "Cutsomer.hpp"

//****************************************************
//                                      constructor
Customer::Customer(string _f, string _l){
    fName = _f;
    lName = _l;
}

//****************************************************
//                                      constructor default
Customer::Customer(){
    fName = "default first";
    lName = "default last";
}

//****************************************************
//                                      getFirstName()
string Customer::getFirstName(){
    return fName;
}

//****************************************************
//                                      getLastName()
string Customer::getLastName(){
    return lName;
}

//****************************************************
//                                      displayName()
void Customer::displayName(){
    cout << fName << " " << lName << endl;
}

//****************************************************
//                                      netName()
string Customer::getName(){
    string fullName;
    fullName = fName + " " + lName;
    return fullName;
}

//****************************************************
//                                        << operator
ostream& operator<<(ostream& os, Customer& cust){
    os << cust.getFirstName() << " " << cust.getLastName() << endl;
    return os;
}







