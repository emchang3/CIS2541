//
//  main.cpp
//  Lab8
//
//  Created by Ezra Chang on 7/5/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Lottery Winners
//
// A lottery ticket buyer purchases 10 tickets a week, always playing the same 10 5-digit “lucky” combinations. Write a program that initializes an array or a vector with these numbers and then lets the player enter this week’s winning 5-digit number. The program should perform a linear search through the list of the player’s numbers and report whether or not one of the tickets is a winner this week. Here are the numbers:
//
// 13579 26791 26792 33445 55555 62483 77777 79422 85647 93121

#include <iostream>
using namespace std;

int main()
{
	const int lucky[10] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
	int guess;
	cout << "Enter your number: ";
	cin >> guess;
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		if (guess == lucky[i])
		{
			cout << "You're a winner! The winning number is: " << lucky[i] << endl << endl;
		}
		else
		{
			cout << "Sorry, try again." << endl << endl;
		}
	}
  return 0;
}
