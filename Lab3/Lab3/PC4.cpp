//
//  PC4.cpp
//  Lab3
//
//  Created by Ezra Chang on 6/13/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Write a program that calculates the average rainfall for three months. The program should ask the user to enter the name of each month, such as June or July, and the amount of rain (in inches) that fell each month. The program should display a message similar to the following:
//
// The average rainfall for June, July, and August is 6.72 inches.

#include <iostream>
#include <string>
using namespace std;
#include "PC4.hpp"

string PC4::rainfall ()
{
  const string name = "Month name: ";
  const string inches = "Rainfall in inches: ";
  double rain [3];
  string months [3];

  for (int i = 0; i < 3; i++)
  {
    cout << name;
    cin >> months[i];
    cout << inches;
    cin >> rain[i];
  }
  cout << endl;

  double total = 0;
  for (int j = 0; j < 3; j++)
  {
    total += rain[j];
  }
  double avg = total / 3;

  string result = "The average rainfall for " + months[0] + ", " + months[1] + ", " + months[2] + " is " + to_string(avg) + " inches.";
  // string result = "ok.";

  return result;
}
