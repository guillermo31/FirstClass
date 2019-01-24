//
//  Controller.cpp
//  FirstClass
//
//  Created by Ramos aguirre, Guillermo on 1/24/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    this->specialNumber = 313131;
}

void Controller :: start()
{
    cout << "this is the start method" << endl;
    cout << "here is the class number: " << specialNumber << ", that number is cool" << endl;
    cout << "type your name" << endl;
    cin >> input;
    cout << input << endl;
}
