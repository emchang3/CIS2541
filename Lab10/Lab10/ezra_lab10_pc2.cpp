//
//  ezra_lab10_pc2.cpp
//  Lab10
//
//  Created by Ezra Chang on 7/17/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Backward String
//
// Write a function that accepts a pointer to a C-string as an argument and displays its contents backward. For instance, if the string argument is “Gravity” the function should display “ytivarG”. Demonstrate the function in a program that asks the user to input a string and then passes it to the function.

#include <iostream>
#include <cstring>
using namespace std;

void stringReverse(char *myString)
{
  int j = (int) strlen(myString);
  for (size_t i = 0; i < j; i++)
  {
    // cout << *myString;
    myString++;
  }
  // cout << endl;
  for (size_t k = 0; k < j + 1; k++) {
    cout << *myString;
    myString--;
  }
  cout << endl;
}

int main()
{
  char inputString[50];
	cout << "Input a string (less than 50 characters): ";
	cin.getline(inputString, 50);
  char *stringPtr = inputString;
  stringReverse(stringPtr);
  return 0;
}
