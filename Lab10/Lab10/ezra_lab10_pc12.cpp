//
//  ezra_lab10_pc12.cpp
//  Lab10
//
//  Created by Ezra Chang on 7/17/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Password Verifier
//
// Imagine you are developing a software package that requires users to enter their own passwords. Your software requires that users’ passwords meet the following criteria:
// • The password should be at least six characters long.
// • The password should contain at least one uppercase and at least one lowercase letter.
// • The password should have at least one digit.
// Write a program that asks for a password and then verifies that it meets the stated criteria. If it doesn’t, the program should display a message telling the user why.

#include <iostream>
#include <cstring>
using namespace std;

void validatePassword(char *password)
{
  if (strlen(password) < 6)
  {
    cout << "Too short!" << endl;
    return;
  }
  int length = (int) strlen(password);
  // cout << "length: " << length << endl;

  bool hasUpper = false, hasLower = false, hasNum = false;
  for (int i = 0; i < length; i++)
  {
		// cout << "char: " << *password << endl;
    if (isdigit(*password) && hasNum == false)
    {
      hasNum = true;
    }
    if (islower(*password) && hasLower == false)
    {
      hasLower = true;
    }
    if (isupper(*password) && hasUpper == false)
    {
      hasUpper = true;
    }
    password++;
  }

  if (hasUpper == false)
  {
    cout << "Needs an uppercase character!" << endl;
  }
  if (hasLower == false)
  {
    cout << "Needs a lowercase character!" << endl;
  }
  if (hasNum == false)
  {
    cout << "Needs a number!" << endl;
  }

  if (hasUpper == true && hasLower == true && hasNum == true) {
    cout << "Good to go!" << endl;
  }
}

int main()
{
	char inputString[50];
	cout << "Input a password (less than 50 characters): ";
	cin.getline(inputString, 50);
  char *test = inputString;
  validatePassword(test);
  return 0;
}
