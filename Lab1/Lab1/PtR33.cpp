//
//  PtR33.cpp
//  Lab1
//
//  Created by Ezra Chang on 6/9/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.

#include <iostream>
using namespace std;
#include "PtR33.hpp"

int PtR33::calculate ()
{
  // The variable x starts with the value 0.
  int x = 0;

  // The variable y starts with the value 5.
  int y = 5;

  // Add 1 to x.
  x += 1;

  // Add 1 to y.
  y += 1;

  // Add x and y, and store the result in y.
  y += x;

  // Display the value in y on the screen.
  return y;
}
