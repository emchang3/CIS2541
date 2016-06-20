//
//  PC7.cpp
//  Lab4
//
//  Created by Ezra Chang on 6/19/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Time Calculator
// 
// Write a program that asks the user to enter a number of seconds.
// • There are 60 seconds in a minute. If the number of seconds entered by the user is greater than or equal to 60, the program should display the number of minutes in that many seconds.
// • There are 3,600 seconds in an hour. If the number of seconds entered by the user is greater than or equal to 3,600, the program should display the number of hours in that many seconds.
// • There are 86,400 seconds in a day. If the number of seconds entered by the user is greater than or equal to 86,400, the program should display the number of days in that many seconds.

#include <iostream>
using namespace std;
#include "PC7.hpp"

void PC7::time()
{
  int seconds;
  cout << "Number of seconds: ";
  cin >> seconds;
  if (seconds < 0) {
    cout << "Please enter a valid number." << endl;
    time();
  }
  else
  {
    if (seconds < 60)
    {
      cout << seconds << " seconds.";
    }
    else
    {
      cout << seconds << " seconds contains ";
      if (seconds >= 60 && seconds < 3600)
      {
        cout << seconds / 60 << " minute(s).";
      }
      else if (seconds >= 3600 && seconds < 86400)
      {
        cout << seconds / 3600 << " hour(s).";
      }
      else
      {
        cout << seconds / 86400 << " day(s).";
      }
    }
  }
}
