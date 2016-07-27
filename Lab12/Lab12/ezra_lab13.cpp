//
//  main.cpp
//  Lab12
//
//  Created by Ezra Chang on 7/25/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

#include "Coin.hpp"

int main()
{
	Coin quarter;
	Coin dime;
	Coin nickel;
	double total = 0;

	string go;
	cout << "The game: Don't let your total exceed $1.00. Toss (enter 'no' to quit)? ";
	cin >> go;

	while (go != "no")
	{
		quarter.toss();
		dime.toss();
		nickel.toss();
		if (quarter.getSideUp() == "heads")
		{
			total += 0.25;
			cout << "Your quarter rolled face up: + $0.25." << endl;
		}
		if (dime.getSideUp() == "heads")
		{
			total += 0.10;
			cout << "Your dime rolled face up: + $0.10." << endl;
		}
		if (nickel.getSideUp() == "heads")
		{
			total += 0.05;
			cout << "Your nickel rolled face up: + $0.05." << endl;
		}
		cout << "Your total is now $" << setprecision (2) << fixed << total << "." << endl;

		if (total > 1)
		{
			cout << "You lose." << endl;
			break;
		}
		if (total == 1) {
			cout << "You win!" << endl;
			break;
		}
		cout << "Continue? ";
		cin >> go;
	}
  return 0;
}
