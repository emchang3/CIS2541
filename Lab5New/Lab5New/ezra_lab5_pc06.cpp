//
//  PC6.cpp
//  Lab5
//
//  Created by Ezra Chang on 6/20/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Distance Traveled
//
// The distance a vehicle travels can be calculated as follows:
// distance = speed * time
// For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is 120 miles.
// Write a program that asks the user for the speed of a vehicle (in miles per hour) and how many hours it has traveled. The program should then use a loop to display the distance the vehicle has traveled for each hour of that time period. Here is an example of the output:
//
// What is the speed of the vehicle in mph? 40
// How many hours has it traveled? 3
//
// Hour Distance Traveled
// --------------------------------
// 1    40
// 2    80
// 3    120
// Input Validation: Do not accept a negative number for speed and do not accept any value less than 1 for time traveled.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 double mph, hours;
 cout << "What is the speed of the vehicle in mph? ";
 cin >> mph;
 if (mph < 0)
 {
   cout << "Please enter a valid speed.";
   return 0;
 }
 cout << "How many hours has it traveled? ";
 cin >> hours;
 if (hours <= 0)
 {
   cout << "Please enter a valid time.";
   return 0;
 }
 cout << endl;

 cout << setw(10) << left << "Hour" << setw(20) << "Distance Traveled" << endl;
 for(int i = 0; i < 30; i++)
 {
   cout << "-";
 }
 cout << endl;
 for(int j = 0; j < 3; j++)
 {
   cout << setw(10) << left << j + 1 << setw(20) << mph * (j + 1) << endl;
 }
 cout << endl;
 return 0;
}
