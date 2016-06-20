//
//  PC26.cpp
//  Lab4
//
//  Created by Ezra Chang on 6/19/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Mobile Service Provider
//
// A mobile phone service provider has three different subscription packages for its customers:
// Package A: For $39.99 per month 450 minutes are provided. Additional minutes are $0.45 per minute.
// Package B: For $59.99 per month 900 minutes are provided. Additional minutes are $0.40 per minute.
// Package C: For $69.99 per month unlimited minutes provided.
// Write a program that calculates a customer’s monthly bill. It should ask which package the customer has purchased and how many minutes were used. It should then display the total amount due.
// Input Validation: Be sure the user only selects package A, B, or C.
//
// Modify the Program in Programming Challenge 25 so that it also displays how much money Package A customers would save if they purchased packages B or C, and how much money Package B customers would save if they purchased Package C. If there would be no savings, no message should be printed.

#include <iostream>
// #include <cmath>
#include <iomanip>
using namespace std;
#include "PC26.hpp"

void PC26::service()
{
  // Constants for menu choices
	const int PACKAGE_A_CHOICE = 1;
	const int PACKAGE_B_CHOICE = 2;
	const int PACKAGE_C_CHOICE = 3;
	const int QUIT_CHOICE	   = 4;

	// Constants for base package rates
	const double PACKAGE_A_BASE = 39.99;
	const double PACKAGE_B_BASE = 59.99;
	const double PACKAGE_C_BASE = 69.99;

	// Constants for minutes provided
	const double PACKAGE_A_MINS = 450.0;
	const double PACKAGE_B_MINS = 900.0;
	const double PACKAGE_C_MINS = 0.0;

	// Constants for additional minute rates
	const double PACKAGE_A_ADD = 0.45;
	const double PACKAGE_B_ADD = 0.40;
	const double PACKAGE_C_ADD = 0.0;

	int choice;			// To hold a menu choice
	double mins;		// To hold the minutes used

	double baseCostA;	// To hold the cost of package A
	double baseCostB;	// To hold the cost of package B
	double baseCostC;	// To hold the cost of package C

	double addMinsA;	// To hold the additonal minutes used for package A
	double addMinsB;	// To hold the additonal minutes used for package B
	double addMinsC;	// To hold the additonal minutes used for package C

	double addChargesA;	// To hold the additional charges for package A
	double addChargesB;	// To hold the additional charges for package B
	double addChargesC;	// To hold the additional charges for package C

	double totalA;		// To hold the total amount due	for package A
	double totalB;		// To hold the total amount due	for package B
	double totalC;		// To hold the total amount due	for package C

	double savingsA;	// To hold the package A savings
	double savingsB;	// To hold the package B savings
	double savingsC;	// To hold the package C savings

	// Display the menu and get a choice.
	cout << "Select a subscription package: \n"
		 << "1. Package A\n"
		 << "2. Package B\n"
		 << "3. Package C\n"
		 << "4. Quit\n\n";
	cin >> choice;

	// Set the numeric output formatting.
	cout << fixed << showpoint << setprecision(2);

  string option;

  if (choice != 1 && choice != 2 && choice != 3 && choice != 4) {
    cout << "Please enter a valid choice." << endl;
    return;
  }

  if (choice == 4) return;

  cout << "How many minutes did you use? ";
  cin >> mins;

  baseCostA = PACKAGE_A_BASE;
  baseCostB = PACKAGE_B_BASE;
  baseCostC = PACKAGE_C_BASE;

  if (choice == 1) {
    if (mins > PACKAGE_A_MINS)
    {
      addMinsA = mins - PACKAGE_A_MINS;
      addChargesA = addMinsA * PACKAGE_A_ADD;
      if (addChargesA > (PACKAGE_B_BASE - PACKAGE_A_BASE)) {
        savingsA = addChargesA - addMinsA * PACKAGE_B_ADD;
        option = "B";
      }
      if (addChargesA > (PACKAGE_C_BASE - PACKAGE_A_BASE)) {
        if (addChargesA - PACKAGE_C_BASE > savingsA) {
          savingsA = addChargesA - (PACKAGE_C_BASE - PACKAGE_A_BASE);
          option = "C";
        }
      }
    }
    else
    {
      addMinsA = 0;
      addChargesA = 0;
      savingsA = 0;
    }
    totalA = baseCostA + addChargesA;
    cout << "You owe $" << totalA << "." << endl;
    if (savingsA > 0) {
      cout << "If you'd chosen Plan " << option << ", you'd have saved $" << savingsA << ".";
    }
  }
  else if (choice == 2)
  {
    if (mins > PACKAGE_B_MINS)
    {
      addMinsB = mins - PACKAGE_B_MINS;
      addChargesB = addMinsB * PACKAGE_B_ADD;
      if (addChargesB > PACKAGE_C_BASE - PACKAGE_B_BASE) {
        savingsB = addChargesB - (PACKAGE_C_BASE - PACKAGE_B_BASE);
        option = "C";
      }
    }
    else
    {
      addMinsB = 0;
      addChargesB = 0;
      savingsB = 0;
    }
    totalB = baseCostB + addChargesB;
    cout << "You owe $" << totalB << "." << endl;
    if (savingsB > 0) {
      cout << "If you'd chosen Plan " << option << ", you'd have saved $" << savingsB << ".";
    }
  }
  else
  {
    addMinsC = PACKAGE_C_MINS;
    addChargesC = PACKAGE_C_ADD;
    totalC = baseCostC + addChargesC;
    cout << "You owe $" << totalC << "." << endl;
  }


}
