// Chapter 4, Programming Challenge 26: Mobile Service Provider, Part 2
#include <iostream>
#include <iomanip>
using namespace std;
int main()
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


    /////////////////////////////////////
    //      Your code goes here!       //
    /////////////////////////////////////
    
    
	return 0;
}