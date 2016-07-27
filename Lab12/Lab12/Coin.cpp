//
//  Coin.cpp
//  Lab12
//
//  Created by Ezra Chang on 7/25/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.

#include <iostream>
using namespace std;

#include "Coin.hpp"

Coin::Coin()
{
  srand(time(0));
  int coin = rand() % 2 + 1;
  coin == 1 ? sideUp = "heads" : sideUp = "tails";
}

void Coin::toss()
{
  int coin = rand() % 2 + 1;
  coin == 1 ? sideUp = "heads" : sideUp = "tails";
}

string Coin::getSideUp()
{
  return sideUp;
}
