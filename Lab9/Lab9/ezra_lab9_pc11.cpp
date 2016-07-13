//
//  ezra_lab9_pc11.cpp
//  Lab9
//
//  Created by Ezra Chang on 7/13/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Array Expander
//
// Write a function that accepts an int array and the array’s size as arguments. The func- tion should create a new array that is twice the size of the argument array. The func- tion should copy the contents of the argument array to the new array and initialize the unused elements of the second array with 0. The function should return a pointer to the new array.

#include <iostream>
#include <memory>
using namespace std;

int * doubleArray(int arr[], int size)
{
  int * newArray = (int*) malloc(size * 2 * sizeof newArray);

  // This is the new array.
  int * retVal = newArray;

  for (size_t i = 0; i < size; i++) {
    *newArray = arr[i];
    newArray++;
  }

  return retVal;
}

int main()
{
  int arraySize = 10;
  int myArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  doubleArray(myArray, arraySize);

  return 0;
}
