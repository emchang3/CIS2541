//
//  main.cpp
//  Lab7
//
//  Created by Ezra Chang on 6/29/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Larger Than n
//
// In a program, write a function that accepts three arguments: an array, the size of the array, and a number n. Assume that the array contains integers. The function should display all of the numbers in the array that are greater than the number n.

#include <iostream>
using namespace std;

void findLarger(int myArray[], int arraySize, int n)
{
	cout << endl;
	for (int i = 0; i < arraySize; i++)
	{
		if (myArray[i] > n)
		{
			cout << myArray[i];
			if (i != arraySize - 1)
			{
				cout << ", ";
			}
		}
	}
}

int main() {
	cout << "PC4: Larger Than n" << endl << endl;
	srand(time(NULL));
	int rand1 = rand() % 50 + 1;
	int arrgh[rand1];
	for(int i = 0; i < rand1; i++)
  {
    arrgh[i] = rand() % 100 + 1;
  }
	int num;
	cout << "Enter a number 1-100: ";
	cin >> num;
	findLarger(arrgh, rand1, num);
	cout << endl << endl;
	return 0;
}
