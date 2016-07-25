//
//  Coin.cpp
//  Lab12
//
//  Created by Ezra Chang on 7/25/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Coin.hpp"

Coin::Coin()
{
  srand(time(0));
  int coin = rand() % 2 + 1;
  coin == 1 ? sideUp = "heads" : sideUp = "tails";
  heads = 0;
  tails = 0;
}

void Coin::toss()
{
  int coin = rand() % 2 + 1;
  cout << coin << endl;
  coin == 1 ? sideUp = "heads" : sideUp = "tails";
  sideUp == "heads" ? heads++ : tails++;
}

void Coin::getSideUp()
{
  cout << "The coin is now " << sideUp << " up." << endl;
}

void Coin::showTallies()
{
  cout << "Heads: " << heads << endl;
  cout << "Tails: " << tails << endl;
}
