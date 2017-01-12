//
//  Car.cpp
//  Question2
//
//  Created by Ezra Chang on 7/27/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//

#include "Car.hpp"

Car::Car(int model, string carMake)
{
  yearModel = model;
  make = carMake;
  speed = 0;
}

int Car::getSpeed()
{
  return speed;
}

int Car::getModel()
{
  return yearModel;
}

string Car::getMake()
{
  return make;
}

void Car::brake()
{
  speed -= 5;
}

void Car::accelerate()
{
  speed += 5;
}
