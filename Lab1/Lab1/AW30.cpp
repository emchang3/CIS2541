//
//  AW30.cpp
//  Lab1
//
//  Created by Ezra Chang on 6/8/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Available Credit
// The following steps should be followed in a program that calculates a customer’s available credit.

#include <iostream>
using namespace std;
#include "AW30.hpp"

double AW30::calculate ()
{
  double max, used, available;

  // 1. Display the message “Enter the customer’s maximum credit.”
  cout << "Enter the customer’s maximum credit. ";

  // 2. Wait for the user to enter the customer’s maximum credit.
  cin >> max;

  // 3. Display the message “Enter the amount of credit used by the customer.”
  cout << "Enter the amount of credit used by the customer. ";

  // 4. Wait for the user to enter the customer’s credit used.
  cin >> used;

  // 5. Subtract the used credit from the maximum credit to get the customer’s available credit.
  available = max - used;

  // 6. Display a message that shows the customer’s available credit.
  return available;
}
