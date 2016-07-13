//
//  ezra_lab8_pc6.cpp
//  Lab8
//
//  Created by Ezra Chang on 7/5/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int NUM_NAMES = 20;
	string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim", "Griffin, Jim", "Stamey, Marty", "Rose, Geri", "Taylor, Terri", "Johnson, Jill", "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", "James, Jean", "Weaver, Jim", "Pore, Bob", "Rutherford, Greg", "Javens, Renee", "Harrison, Rose", "Setzer, Cathy", "Pike, Gordon", "Holland, Beth"};
	// Insert your code to complete this program

	string largest = names[0];
	int largestIndex = 0;
	int upperLimit = NUM_NAMES - 1;
	string placeholder;

	while (upperLimit >= 1)
	{
		for (int i = 0; i <= upperLimit; i++)
		{
			if (names[i] > largest)
			{
				largest = names[i];
				largestIndex = i;
			}
		}
		placeholder = names[upperLimit];
		names[upperLimit] = largest;
		names[largestIndex] = placeholder;
		upperLimit -= 1;
		largest = names[0];
		largestIndex = 0;
	}

	for (int j = 0; j < NUM_NAMES; j++) {
		cout << names[j] << endl;
	}

	return 0;
}
