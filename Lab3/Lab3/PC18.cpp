//
//  PC18.cpp
//  Lab3
//
//  Created by Ezra Chang on 6/13/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Interest Earned
// Assuming there are no deposits other than the original investment, the balance in a savings account after one year may be calculated as
//
// Amount = Principal*(1 + Rate/T)^T
//
// Principal is the balance in the savings account, Rate is the interest rate, and T is the number of times the interest is compounded during a year (T is 4 if the interest is compounded quarterly).
//
// Write a program that asks for the principal, the interest rate, and the number of times the interest is compounded. It should display a report similar to
//
// Interest Rate:         4.25%
// Times Compounded:        12
// Principal:          1000.00
// Interest:             43.34
// Amount in Savings:  1043.34

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#include "PC18.hpp"

int PC18::longest(string msgs[], double inputs[])
{
  int biggest = 0;
  for(int i = 0; i < 5; i++)
  {
    if (msgs[i].length() > biggest)
    {
      biggest = msgs[i].length();
    }
    if (to_string(inputs[i]).length() > biggest)
    {
      biggest = to_string(inputs[i]).length();
    }
  }

  return biggest;
}

void PC18::calc()
{
  string msg[5];
  msg[0] = "Interest Rate: ";
  msg[1] = "Times Compounded: ";
  msg[2] = "Principal: ";
  msg[3] = "Interest: ";
  msg[4] = "Amount in Savings: ";
  double numbers[5];

  cout << msg[0];
  cin >> numbers[0];
  cout << msg[1];
  cin >> numbers[1];
  cout << msg[2];
  cin >> numbers[2];
  cout << endl;
  numbers[4] = numbers[2] * pow((1 + numbers[0] / (numbers[1] * 100)), numbers[1]);
  numbers[3] = numbers[4] - numbers[2];

  for(int j = 0; j < 5; j++)
  {
    double scale = 0.01;
    numbers[j] = (int)(numbers[j] / scale) * scale;
  }

  int column = longest(msg, numbers);

  for(int i = 0; i < 5; i++)
  {
    cout << setw(column) << left << msg[i] << setw(column) << right << setprecision (2) << fixed << numbers[i];
    if (i == 0) {
      cout << "%";
    }
    cout << endl;
  }
  cout << endl << endl;
}
