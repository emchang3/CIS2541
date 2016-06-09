//
//  PC5.cpp
//  Lab2
//
//  Created by Ezra Chang on 6/9/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Average of Values
//
// To get the average of a series of values, you add the values up and then divide the sum by the number of values. Write a program that stores the following values in five different variables: 28, 32, 37, 24, and 33. The program should first calculate the sum of these five variables and store the result in a separate variable named sum. Then, the program should divide the sum variable by 5 to get the average. Display the average on the screen.

#include <iostream>
using namespace std;
#include "PC5.hpp"

double PC5::average ()
{
  double first, second, third, fourth, fifth, sum, average;

  first = 28;
  second = 32;
  third = 37;
  fourth = 24;
  fifth = 33;

  sum = first + second + third + fourth + fifth;

  average = sum / 5;

  return average;
}
