//
//  PC2.cpp
//  Lab5
//
//  Created by Ezra Chang on 6/20/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Characters for the ASCII Codes
//
// Write a program that uses a loop to display the characters for the ASCII codes 0 through 127. Display 16 characters on each line.

#include <iostream>
using namespace std;

int main()
{
  for(int i = 0; i <= 127; i++)
  {
    cout << (char) i << " ";
    if ((i + 1) % 16 == 0)
    {
      cout << endl;
    }
  }
  cout << endl << endl;
  return 0;
}
