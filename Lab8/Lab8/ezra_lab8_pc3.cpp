//
//  ezra_lab8_pc3.cpp
//  Lab8
//
//  Created by Ezra Chang on 7/5/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Lottery Winners Modification
//
// Modify the program you wrote for Programming Challenge 2 (Lottery Winners) so it performs a binary search instead of a linear search.

#include <iostream>
using namespace std;

int main()
{
  const int lucky[10] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
	int guess;
	cout << "Enter your number: ";
	cin >> guess;
	cout << endl;
  int smallest = 0;
  int largest = 10;
  int start = (int)(smallest + largest) / 2;
	cout << smallest << " " << start << " " << largest << endl;
	while (guess != lucky[start])
  {
	  if (guess < lucky[start])
    {
	    cout << "Nope. Number: " << lucky[start] << endl;
      largest = start;
      start = (int)(smallest + largest) / 2;
      cout << smallest << " " << start << " " << largest << endl;
	  }
    else if (guess > lucky[start])
    {
      cout << "Nope. Number: " << lucky[start] << endl;
      smallest = start;
      start = (int)(smallest + largest) / 2;
      cout << smallest << " " << start << " " << largest << endl;
    }
    else
    {
			break;
    }
	}
  cout << "You win! Number: " << lucky[start] << endl << endl;
  return 0;
}
