//
//  main.cpp
//  Question1
//
//  Created by Ezra Chang on 7/27/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int *reverser(int original[], int size)
{
	int *dupe[size];
	int *copy = dupe[size - 1];
	for (size_t e = 0; e < size; e++)
	{
		*copy = original[e];
		copy--;
	}
	copy++;
	return copy;
}

int *shifter(int original[], int size)
{
	int *dupe = new int[size + 1];
	dupe[0] = 0;
	int *copy = dupe;
	copy++;
	for (size_t m = 0; m < size; m++) {
		*copy = original[m];
		copy++;
	}
	return dupe;
}

int main()
{
	int sizeInput;
	cout << "Enter the size of the array: ";
	cin >> sizeInput;

	srand(time(0));
	int og[sizeInput];
	for (size_t c = 0; c < sizeInput; c++)
	{
		og[c] = rand() % 1000 + 1;
	}

	int *reversed = reverser(og, sizeInput);
	int *reverserator = reversed;
	int *shifted = shifter(og, sizeInput);
	int *shifterator = shifted;

	string filename = "chang_final_pc1.txt";
	ofstream outputFile;
	outputFile.open(filename);
	if (outputFile.fail())
  {
    cout << "File open fail." << endl;
  }
	else
	{
		outputFile << "Original Array Values:" << endl << "[ ";
		for (size_t i = 0; i < sizeInput; i++) {
			outputFile << og[i];
			if (i != sizeInput - 1) {
				outputFile << ", ";
			}
		}
		outputFile << " ]" << endl;

		outputFile << "Reversed Array Values:" << endl << "[ ";
		for (size_t k = 0; k < sizeInput; k++) {
			outputFile << *reverserator;
			if (k != sizeInput - 1) {
				outputFile << ", ";
			}
			reverserator++;
		}
		outputFile << " ]" << endl;

		outputFile << "Shifted Array Values:" << endl << "[ ";
		for (size_t j = 0; j < sizeInput + 1; j++) {
			outputFile << *shifterator;
			if (j != sizeInput) {
				outputFile << ", ";
			}
			shifterator++;
		}
		outputFile << " ]" << endl;
	}
	outputFile.close();

	cout << "The values have been reversed and shifted and saved in chang_final_pc1.txt" << endl;

  return 0;
}
