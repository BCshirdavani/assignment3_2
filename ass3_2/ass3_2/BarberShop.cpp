//
//  BarberShop.cpp
//  ass3_2
//
//  Created by Shy on 11/24/17.
//  Copyright © 2017 Shy. All rights reserved.
//

#include <stdio.h>
#include "BarberShop.h"
#include "Cutsomer.hpp"
#include <iostream>
using namespace std;

//****************************************************
//                                      addCustomer
void BarberShop::addCustomer(Customer& customer){
//    cout << "\n\taddCustomer(" << customer.getFirstName() << ")" << endl;
    s1.push(customer);
//    cout << "\ts1 length: " << s1.getLength() << endl;
//    cout << "\ts1: " << s1 << endl;
//    cout << "\ts2 length: " << s2.getLength() << endl;
//    cout << "\ts2: " << s2 << endl;
}


//****************************************************
//                                      nextCustomer
// logic here is to have s1 stack be the stack at the door
// then s2 stack reverses that s1, making it like a que for the chair
// but it only refreshes the chair que (s2), when s2 is totally empty,
// to maintain proper order.
Customer BarberShop::nextCustomer(){
//    cout << "\n\tnextCustomer()" << endl;
//    cout << "\t\ts1 had: " << s1 << endl;
//    cout << "\t\ts2 had: " << s2 << endl;
    Customer tempMOVE;
    Customer whoNext;
    //        tempMOVE = new Customer();
    //        tempPOP = new Customer();
    if ( s2.isEmpty() ){
        for ( int i = 0; i <= s1.length; i++ ){
            tempMOVE = s1.pop();
//            cout << "\t\tfrom s1: " << tempMOVE.getName() << endl;
            s2.push(tempMOVE);
        }
//        cout << "\tafter empty, s2 now has: " << s2 << endl;
//        cout << "\tafter empty, s1 now has: " << s1 << endl;
        whoNext = s2.pop();
//        cout << "\t\tpopping from s2: " << whoNext.getName() << endl;
        return whoNext;
    }
    else /*if ( !(s2.isEmpty()) )*/{
        whoNext = s2.pop();
//        cout << "\t\tpopping from s2: " << whoNext.getName() << endl;
        return whoNext;
    }
}



