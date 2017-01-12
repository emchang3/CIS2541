//
//  main.cpp
//  Question2
//
//  Created by Ezra Chang on 7/27/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Car.hpp"

int main()
{
	Car fit(2008, "Honda Fit");
	for (size_t a = 0; a < 5; a++) {
		fit.accelerate();
		cout << "The speed of the " << fit.getModel() << " " << fit.getMake() << " is " << fit.getSpeed() << " MPH." << endl;
	}
	for (size_t a = 0; a < 5; a++) {
		fit.brake();
		cout << "The speed of the " << fit.getModel() << " " << fit.getMake() << " is " << fit.getSpeed() << " MPH." << endl;
	}
  return 0;
}
