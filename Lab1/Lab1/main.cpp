//
//  main.cpp
//  Lab1
//
//  Created by Ezra Chang on 6/8/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.

#include <iostream>
using namespace std;

#include "AW30.hpp"
#include "PtR33.hpp"

int main ()
{
  cout << "AW30" << endl << endl;
  AW30 credObj;
  double result = credObj.calculate();
  cout << "Customer's available credit: " << result << endl << endl;

  cout << "PtR33" << endl << endl;
  PtR33 algObj;
  cout << "y = " << algObj.calculate() << endl;
  return 0;
}
