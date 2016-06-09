//
//  PC10.cpp
//  Lab2
//
//  Created by Ezra Chang on 6/9/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Miles per Gallon
//
// A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen.
// Hint: Use the following formula to calculate miles per gallon (MPG):
// MPG   Miles Driven/Gallons of Gas Used

#include <iostream>
using namespace std;
#include "PC10.hpp"

double PC10::mpg ()
{
  return 375 / 15;
}
