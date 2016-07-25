//
//  main.cpp
//  Lab12
//
//  Created by Ezra Chang on 7/25/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Coin.hpp"

int main()
{
	Coin coin;
	for (size_t c = 0; c < 20; c++)
	{
		coin.toss();
		coin.getSideUp();
	}
	coin.showTallies();
  return 0;
}
