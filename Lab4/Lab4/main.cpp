//
//  main.cpp
//  Lab4
//
//  Created by Ezra Chang on 6/19/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.

#include <iostream>
using namespace std;

#include "PC4.hpp"
#include "PC7.hpp"
#include "PC26.hpp"

int main()
{
  cout << "PC4: Area of Rectangles." << endl << endl;
  PC4 pc4;
  pc4.area();
  cout << endl << endl;

  cout << "PC7: Time Calculator." << endl << endl;
  PC7 pc7;
  pc7.time();
  cout << endl << endl;

  cout << "PC26: Mobile Service Provider, Part 2." << endl << endl;
  PC26 pc26;
  pc26.service();
  cout << endl << endl;
}
