//
//  main.cpp
//  Lab3
//
//  Created by Ezra Chang on 6/13/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.

#include <iostream>
using namespace std;

#include "PC4.hpp"
#include "PC17.hpp"
#include "PC18.hpp"

int main ()
{
  cout << "PC4: Average Rainfall." << endl << endl;
  PC4 pc4;
  cout << pc4.rainfall() << endl << endl;

  cout << "PC17: Math Tutor." << endl << endl;
  PC17 pc17;
  pc17.add();

  cout << "PC18: Interest Earned." << endl << endl;
  PC18 pc18;
  pc18.calc();

  return 0;
}
