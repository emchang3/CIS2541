//
//  ezra_lab11a_pc3.cpp
//  Lab11a
//
//  Created by Ezra Chang on 7/18/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Corporate Sales Data
//
// Write a program that uses a structure to store the following data on a company division:
// Division Name (such as west, West, south, or South)
// First-Quarter Sales
// Second-Quarter Sales
// Third-Quarter Sales
// Fourth-Quarter Sales
// Total Annual Sales
// Average Quarterly Sales
//
// The program should use four variables of this structure. Each variable should rep- resent one of the following corporate divisions: west, West, south, and South. The user should be asked for the four quarters’ sales figures for each division. Each division’s total and average sales should be calculated and stored in the appropriate member of each structure variable. These figures should then be displayed on the screen.
//
// Input Validation: Do not accept negative numbers for any sales figures.

#include <iostream>
using namespace std;

struct Division{
  string name;
  double first, second, third, fourth, total, average;
};

void display(Division div)
{
  cout << "Division name: " << div.name << endl;
  cout << "Q1: " << div.first << endl;
  cout << "Q2: " << div.second << endl;
  cout << "Q3: " << div.third << endl;
  cout << "Q4: " << div.fourth << endl;
  cout << "Total Annual: " << div.total << endl;
  cout << "Average: " << div.average << endl;
}

int main()
{
  int input[4][4];
  cout << "Input should be inputted NSEWxQ1-Q4" << endl;
  int i = 0;
  int j = 0;
  int tmp;
  cin >> tmp;
  while (i < 4 && tmp >= 0) {
    while (j < 4 && tmp >= 0) {
      input[i][j] = tmp;
      cin >> tmp;
      j++;
    }
    j = 0;
    i++;
  }

  Division north;
  north.name = "North";
  north.first = input[0][0];
  north.second = input[0][1];
  north.third = input[0][2];
  north.fourth = input[0][3];
  north.total = north.first + north.second + north.third + north.fourth;
  north.average = north.total / 4;

  Division south;
  south.name = "South";
  south.first = input[1][0];
  south.second = input[1][1];
  south.third = input[1][2];
  south.fourth = input[1][3];
  south.total = south.first + south.second + south.third + south.fourth;
  south.average = south.total / 4;

  Division east;
  east.name = "East";
  east.first = input[2][0];
  east.second = input[2][1];
  east.third = input[2][2];
  east.fourth = input[2][3];
  east.total = east.first + east.second + east.third + east.fourth;
  east.average = east.total / 4;

  Division west;
  west.name = "West";
  west.first = input[3][0];
  west.second = input[3][1];
  west.third = input[3][2];
  west.fourth = input[3][3];
  west.total = west.first + west.second + west.third + west.fourth;
  west.average = west.total / 4;

  display(north);
  display(south);
  display(east);
  display(west);
  return 0;
}
