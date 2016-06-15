//
//  main.cpp
//  Lab2
//
//  Created by Ezra Chang on 6/9/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.

#include <iostream>
using namespace std;

#include "PC1.hpp"
#include "PC5.hpp"
#include "PC10.hpp"
#include "PC14.hpp"
#include "PC15.hpp"
#include "PC16.hpp"

int main ()
{
  cout << "PC1: Sum of Two Numbers." << endl << endl;
  PC1 pc1;
  pc1.add();

  cout << "PC5: Sales Prediction." << endl << endl;
  PC5 pc5;
  cout << "Average: " << pc5.average() << endl << endl;

  cout << "PC10: Miles per Gallon." << endl << endl;
  PC10 pc10;
  cout << "MPG: " << pc10.mpg() << endl << endl;

  cout << "PC14: Personal Information." << endl << endl;
  PC14 pc14;
  pc14.info();

  cout << "PC15: Triangle Pattern." << endl << endl;
  PC15 pc15;
  pc15.triangle();

  cout << "PC16: Diamond Pattern." << endl << endl;
  PC16 pc16;
  pc16.diamond();

  cin.get();

  return 0;
}
