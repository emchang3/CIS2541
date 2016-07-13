//
//  ezra_lab9_pc2.cpp
//  Lab9
//
//  Created by Ezra Chang on 7/10/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Test Scores #1
//
// Write a program that dynamically allocates an array large enough to hold a user- defined number of test scores. Once all the scores are entered, the array should be passed to a function that sorts them in ascending order. Another function should be called that calculates the average score. The program should display the sorted list of scores and averages with appropriate headings. Use pointer notation rather than array notation whenever possible.
//
// Input Validation: Do not accept negative numbers for test scores.

#include <iostream>
#include <memory>
using namespace std;

void selection(int * unsorted, int NUM)
{
  int largest = unsorted[0];
  int largestIndex = 0;
  int upperLimit = NUM - 1;
  int placeholder;

  while (upperLimit >= 1)
  {
    for (int i = 0; i <= upperLimit; i++)
    {
      if (unsorted[i] > largest)
      {
        largest = unsorted[i];
        largestIndex = i;
      }
    }
    placeholder = unsorted[upperLimit];
    unsorted[upperLimit] = largest;
    unsorted[largestIndex] = placeholder;
    upperLimit -= 1;
    largest = unsorted[0];
    largestIndex = 0;
  }

  cout << endl << "Scores in ascending order:" << endl << "-------------------------" << endl;
  for (int k = 0; k < NUM; k++) {
    cout << unsorted[k] << endl;
  }
}

void average(int * scores, int length)
{
  double sum = 0;
  double number = (double)length;
  for (int l = 0; l < length; l++)
  {
    sum += (double)scores[l];
  }
  cout << endl << "Average score: " << endl << "-------------------------" << endl;
  cout << sum / number << endl;
}

void takeInput()
{
  cout << "(Enter a negatve score after finished entering grades)." << endl;
  int max = 1;
  int * myArray = new int[max];
  // unique_ptr<int[]> myArray(new int[max]);
  int i = 0;
  int input;

  cout << "Enter score: ";
  cin >> input;

  while (input >= 0) {
    myArray[i] = input;
    i++;

    if (i >= max) {
      max += 1;
      int * temp = new int[max];
      // unique_ptr<int[]> temp(new int[max]);
      for (int j = 0; j < i; j++)
      {
        temp[j] = myArray[j];
      }
      // For some reason, I don't have to delete the old allocated memory before reassigning.
      // delete [] myArray;
      myArray = temp;
      delete [] temp;
    }

    cout << "Enter score: ";
    cin >> input;
  }

	selection(myArray, i);
  average(myArray, i);
}

int main()
{
  takeInput();
  return 0;
}
