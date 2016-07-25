//
//  ezra_lab10_pc8.cpp
//  Lab10
//
//  Created by Ezra Chang on 7/17/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Sum of Digits in a String
//
// Write a program that asks the user to enter a series of single digit numbers with nothing separating them. Read the input as a C-string or a string object. The program should display the sum of all the single-digit numbers in the string. For example, if the user enters 2514, the program should display 12, which is the sum of 2, 5, 1, and 4. The program should also display the highest and lowest digits in the string.

#include <iostream>
#include <cstring>
using namespace std;

void sumDigits(char *myString)
{
  int j = (int) strlen(myString);
  int total = 0;
  for (size_t i = 0; i < j; i++) {
    total += (int) *myString - '0';
    myString++;
  }
  cout << "Total: " << total << endl;
}

int main()
{
  char inputString[50];
	cout << "Input a string of numbers (less than 50 characters, no spaces): ";
	cin.getline(inputString, 50);
  char *stringPtr = inputString;
  sumDigits(stringPtr);
  return 0;
}
