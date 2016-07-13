//
//  ezra_lab9_pc5.cpp
//  Lab9
//
//  Created by Ezra Chang on 7/13/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Pointer Rewrite
//
// The following function uses reference variables as parameters. Rewrite the function so it uses pointers instead of reference variables, and then demonstrate the function in a complete program.
//
// int doSomething(int &x, int &y)
// {
//   int temp = x; x = y * 10;
//   y = temp * 10; return x + y;
// }

#include <iostream>
#include <memory>
using namespace std;

int doSomething(int *x, int *y)
{
  int temp = *x;
  *x = *y * 10;
  *y = temp * 10;
  return *x + *y;
}

int main()
{
  int * first = (int*) malloc(sizeof *first);
  *first = 8;
  int * second = (int*) malloc(sizeof *second);
  *second = 9;
  cout << doSomething(first, second) << endl;
  return 0;
}
