//
//  Runner.cpp
//  FirstClass
//
//  Created by Ramos aguirre, Guillermo on 1/24/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#include "Controller.hpp"
int main()
{
//    Controller myFirstController;
//    myFirstController.start();
    
    //Pointer version
    Controller * myPointer = new Controller();
    myPointer->start();
    
    
    return 0;
}
