//
//  ezra_lab9_pc2.cpp
//  Lab9
//
//  Created by Ezra Chang on 7/10/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Test Scores #2
//
// Modify the program of Programming Challenge 2 to allow the user to enter name-score pairs. For each student taking a test, the user types the student’s name followed by the student’s integer test score. Modify the sorting function so it takes an array holding the student names and an array holding the student test scores. When the sorted list of scores is displayed, each student’s name should be displayed along with his or her score. In stepping through the arrays, use pointers rather than array subscripts.

#include <iostream>
#include <memory>
#include <string>
using namespace std;

void selection(int * unsortedInts, string * unsortedStrings, int NUM)
{
  int largest = unsortedInts[0];
  int largestIndex = 0;
  int upperLimit = NUM - 1;
  int placeholder;

  while (upperLimit >= 1)
  {
    for (int i = 0; i <= upperLimit; i++)
    {
      if (unsortedInts[i] > largest)
      {
        largest = unsortedInts[i];
        largestIndex = i;
      }
    }
    placeholder = unsortedInts[upperLimit];
    unsortedInts[upperLimit] = largest;
    unsortedInts[largestIndex] = placeholder;
    upperLimit -= 1;
    largest = unsortedInts[0];
    largestIndex = 0;
  }

  cout << endl << "Scores in ascending order:" << endl << "-------------------------" << endl;
  for (int k = 0; k < NUM; k++) {
    cout << unsortedInts[k] << endl;
  }
}

void takeInput()
{
  int max = 1;
  int * intArray = new int[max];
  string * stringArray = new string[max];
  // unique_ptr<int[]> intArray(new int[max]);
  int i = 0;
  int intInput;
  string stringInput;

  cout << "Enter name: ";
  cin >> stringInput;
  cout << "Enter score: ";
  cin >> intInput;

  while (intInput >= 0)
  {
    stringArray[i] = stringInput;
    intArray[i] = intInput;
    i++;

    if (i >= max) {
      max += 1;
      int * temp = new int[max];
      string * temp2 = new string[max];
      // unique_ptr<int[]> temp(new int[max]);
      for (int j = 0; j < i; j++)
      {
        temp[j] = intArray[j];
        temp2[j] = stringArray[j];
      }
      // For some reason, I don't have to delete the old allocated memory before reassigning.
      // delete [] intArray;
      intArray = temp;
      stringArray = temp2;
      delete [] temp;
    }

    cout << "Enter name: ";
    cin >> stringInput;
    cout << "Enter score: ";
    cin >> intInput;
  }

  // for (size_t gh = 0; gh < i; gh++) {
  //   cout << *stringArray << endl;
  //   cout << *intArray << endl;
  //   intArray++;
  //   stringArray++;
  // }
	// selection(intArray, i);
  // average(intArray, i);
}

int main()
{
  takeInput();
  return 0;
}
