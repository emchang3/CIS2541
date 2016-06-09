//
//  PC16.cpp
//  Lab2
//
//  Created by Ezra Chang on 6/9/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Diamond Pattern
// Write a program that displays the following pattern:
//        *
//       ***
//      *****
//     *******
//      *****
//       ***
//        *

#include <iostream>
using namespace std;
#include "PC16.hpp"

void PC16::diamond ()
{
  cout << "   *" << endl;
  cout << "  ***" << endl;
  cout << " *****" << endl;
  cout << "*******" << endl;
  cout << " *****" << endl;
  cout << "  ***" << endl;
  cout << "   *" << endl << endl;
}
