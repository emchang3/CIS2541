//
//  Car.hpp
//  Question2
//
//  Created by Ezra Chang on 7/27/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp

#include <iostream>
using namespace std;

#endif /* Car_hpp */

class Car
{
  public:
    Car(int, string);
    string getMake();
    int getModel();
    int getSpeed();
    void accelerate();
    void brake();
  private:
    int yearModel, speed;
    string make;
};
