//
//  PC1.cpp
//  Lab5
//
//  Created by Ezra Chang on 6/20/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Sum of Numbers
// 
// Write a program that asks the user for a positive integer value. The program should use a loop to get the sum of all the integers from 1 up to the number entered. For example, if the user enters 50, the loop will find the sum of 1, 2, 3, 4, ... 50.
// Input Validation: Do not accept a negative starting number.

#include <iostream>
#include "PC1.hpp"

using namespace std;

void PC1::sum()
{
  int myNum, myTotal = 0;
  cout << "Enter a positive integer: ";
  cin >> myNum;
  if (myNum <= 0) {
    cout << "Please enter a positive integer." << endl;
  }
  else
  {
    for(int i = 1; i <= myNum; i++)
    {
      myTotal += i;
    }
    cout << "Total: " << myTotal;
  }
}
