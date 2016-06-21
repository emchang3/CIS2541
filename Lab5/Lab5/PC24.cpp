//
//  PC24.cpp
//  Lab5
//
//  Created by Ezra Chang on 6/20/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Using Files—Numeric Processing
//
// If you have downloaded this book’s source code from the companion Web site, you will find a file named Random.txt in the Chapter 05 folder. (The companion Web site is at www.pearsonhighered.com/gaddis.) This file contains a long list of random numbers. Copy the file to your hard drive and then write a program that opens the file, reads all the numbers from the file, and calculates the following:
//
// A) The number of numbers in the file
// B) The sum of all the numbers in the file (a running total)
// C) The average of all the numbers in the file
//
// The program should display the number of numbers found in the file, the sum of the numbers, and the average of the numbers.

#include <iostream>

using namespace std;

#include "PC24.hpp"

#include <iomanip>
#include <string>
#include <fstream>


void PC24::process()
{
  string entry;
  double number_of_numbers = 0, total_of_numbers = 0;

  string filename = "Random.txt";
  ifstream fileObject;
  fileObject.open(filename);
  if (fileObject.fail())
  {
    cout << "File open fail." << endl;
  }
  else
  {
    while(fileObject >> entry)
    {
      number_of_numbers++;
      total_of_numbers += stod(entry);
    }
    cout << "Number of numbers: " << number_of_numbers << endl;
    cout << "Sum of the numbers: " << total_of_numbers << endl;
    cout << "Average of the numbers: " << total_of_numbers / number_of_numbers << endl;
  }
}
