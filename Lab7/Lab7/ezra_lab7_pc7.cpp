//
//  ezra_lab7_pc7.cpp
//  Lab7
//
//  Created by Ezra Chang on 6/29/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Number Analysis Program
//
// Write a program that asks the user for a file name. Assume the file contains a series of numbers, each written on a separate line. The program should read the contents of the file into an array and then display the following data:
//
// • The lowest number in the array
// • The highest number in the array
// • The total of the numbers in the array
// • The average of the numbers in the array
//
// If you have downloaded this book’s source code from the companion Web site, you will find a file named numbers.txt in the Chapter 07 folder. You can use the file to test the program. (The companion Web site is at www.pearsonhighered.com/gaddis.)

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main() {
	cout << "PC7: Number Analysis Program" << endl << endl;

  string entry;
  double number_of_numbers = 0, total_of_numbers = 0;

  string filename = "numbers.txt";
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
    // cout << "Number of numbers: " << number_of_numbers << endl;
    cout << "Sum of the numbers: " << total_of_numbers << endl;
    cout << "Average of the numbers: " << total_of_numbers / number_of_numbers << endl;
  }
  fileObject.close();

  double myArray[(int) number_of_numbers];
  int i = 0;

  fileObject.open(filename);
  if (fileObject.fail())
  {
    cout << "File open fail." << endl;
  }
  else
  {
    while(fileObject >> entry)
    {
      myArray[i] = stod(entry);
      i += 1;
    }

    double largest = myArray[0], smallest = myArray[0];
    for (int j = 0; j < number_of_numbers; j++) {
      if (myArray[j] >= largest) {
        largest = myArray[j];
      }
      if (myArray[j] <= smallest) {
        smallest = myArray[j];
      }
    }
    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl << endl;
  }
  fileObject.close();

  return 0;
}
