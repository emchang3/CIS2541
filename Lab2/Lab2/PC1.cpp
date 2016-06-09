//
//  PC1.cpp
//  Lab2
//
//  Created by Ezra Chang on 6/9/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Sum of Two Numbers
//
// Write a program that stores the integers 50 and 100 in variables, and stores the sum of these two in a variable named total.

#include <iostream>
using namespace std;
#include "PC1.hpp"

int PC1::add ()
{
  int firstInt, secondInt, sumInt;

  firstInt = 50;
  secondInt = 100;
  sumInt = firstInt + secondInt;

  return sumInt;
}
