//
//  PC14.cpp
//  Lab2
//
//  Created by Ezra Chang on 6/9/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Personal Information
//
// Write a program that displays the following pieces of information, each on a separate line:
// Your name
// Your address, with city, state, and ZIP code
// Your telephone number
// Your college major
// Use only a single cout statement to display all of this information.

#include <iostream>
using namespace std;
#include "PC14.hpp"

void PC14::info ()
{
  string name, address, number, major;

  name = "Ezra Chang";
  address = "365 Du Pahze Street, Naperville, IL 60565";
  number = "(630) 995-1782";
  major = "CIS";

  cout << name << endl << address << endl << number << endl << major << endl << endl;
}
