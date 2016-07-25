//
//  ezra_lab10_pc7.cpp
//  Lab10
//
//  Created by Ezra Chang on 7/17/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Name Arranger
//
// Write a program that asks for the user’s first, middle, and last names. The names should be stored in three different character arrays. The program should then store, in a fourth array, the name arranged in the following manner: the last name followed by a comma and a space, followed by the first name and a space, followed by the middle name. For example, if the user entered “Carol Lynn Smith”, it should store “Smith, Carol Lynn” in the fourth array. Display the contents of the fourth array on the screen.

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  	char first[30];
  	cout << "First name (less than 30 characters): ";
  	cin.getline(first, 30);
    char middle[30];
  	cout << "Middle name (less than 30 characters): ";
  	cin.getline(middle, 30);
    char last[30];
  	cout << "Last name (less than 30 characters): ";
  	cin.getline(last, 30);

    char full[100];
    strncat(strncat(strncat(strncat(strncat(full, last, 30), ", ", 2), first, 30), " ", 1), middle, 30);
    cout << full << endl;
  return 0;
}
