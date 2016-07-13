//
//  main.cpp
//  Lab9
//
//  Created by Ezra Chang on 7/10/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Array Allocator
//
// Write a function that dynamically allocates an array of integers. The function should accept an integer argument indicating the number of elements to allocate. The function should return a pointer to the array.

#include <iostream>
using namespace std;

int * dynamicArray(int length)
{
	int myArray[length];
	return myArray;
}

int main()
{
  return 0;
}
