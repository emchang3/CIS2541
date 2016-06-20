//
//  PC4.cpp
//  Lab4
//
//  Created by Ezra Chang on 6/19/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Areas of Rectangles
// 
// The area of a rectangle is the rectangle’s length times its width. Write a program that asks for the length and width of two rectangles. The program should tell the user which rectangle has the greater area, or if the areas are the same.

#include <iostream>
#include "PC4.hpp"
using namespace std;

void PC4::area()
{
  double r1[3];
  double r2[3];
  cout << "Rectangle 1 length: ";
  cin >> r1[0];
  cout << "Rectangle 1 width: ";
  cin >> r1[1];
  cout << "Rectangle 2 length: ";
  cin >> r2[0];
  cout << "Rectangle 2 width: ";
  cin >> r2[1];
  if (r1[0] < 0 || r1[1] < 0 || r2[0] < 0 || r2[1] < 0)
  {
    cout << "Invalid input." << endl;
    area();
  }
  else
  {
    r1[2] = r1[0] * r1[1];
    r2[2] = r2[0] * r2[1];

    if (r1[2] > r2[2]) {
      cout << "Rectangle 1 is larger.";
    }
    else if (r2[2] > r1[2])
    {
      cout << "Rectangle 2 is larger.";
    }
    else
    {
      cout << "The two rectangles equal in size.";
    }
  }
}
