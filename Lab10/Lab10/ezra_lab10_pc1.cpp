//
//  main.cpp
//  Lab10
//
//  Created by Ezra Chang on 7/17/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// String Length
//
// Write a function that returns an integer and accepts a pointer to a C-string as an argu- ment. The function should count the number of characters in the string and return that number. Demonstrate the function in a simple program that asks the user to input a string, passes it to the function, and then displays the function’s return value.

#include <iostream>
#include <cstring>
using namespace std;

unsigned long returnLength(char *myString)
{
	return strlen(myString);
}

int main()
{
	char inputString[50];
	cout << "Input a string (less than 50 characters): ";
	cin.getline(inputString, 50);
  char *test = inputString;
	cout << "Your string has " << returnLength(test) << " characters." << endl << endl;
  return 0;
}
