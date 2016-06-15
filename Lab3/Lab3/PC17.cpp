//
//  PC17.cpp
//  Lab3
//
//  Created by Ezra Chang on 6/13/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Write a program that can be used as a math tutor for a young student. The program should display two random numbers to be added, such as
//   247
// + 129
// The program should then pause while the student works on the problem. When the student is ready to check the answer, he or she can press a key and the program will display the correct solution:
//   247
// + 129
// -----
//   376

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
#include "PC17.hpp"

int PC17::longest (int one, int two, int three)
{
  string firstLine = to_string(one);
  string secondLine = "+ " + to_string(two);
  string thirdLine = to_string(three);

  int biggest = firstLine.length();
  if(secondLine.length() > biggest)
  {
    biggest = secondLine.length();
  }
  if (thirdLine.length() > biggest) {
    biggest = thirdLine.length();
  }
  return biggest;
}

void PC17::add ()
{
  int first, second, answer;
  srand(time(NULL));
  first = rand() % 998 + 1;
  second = rand() % 998 + 1;
  answer = first + second;
  int cwidth = longest(first, second, answer);

  string firstLine = to_string(first);
  string secondLine = "+ " + to_string(second);
  string thirdLine = to_string(answer);
  string dashes = "";
  for(int i = 0; i < cwidth; i++)
  {
    dashes += "-";
  }

  cout << setw(cwidth) << firstLine << endl;
  cout << setw(cwidth) << secondLine << endl;
  cout << setw(cwidth) << dashes;

  // The following line must be included if accepting input prior (ie in other parts of the application).
  cin.ignore(10000, '\n');

  cin.get();
  cout << setw(cwidth) << thirdLine << endl << endl;
}
