//
//  Coin.hpp
//  Lab12
//
//  Created by Ezra Chang on 7/25/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//

#ifndef Coin_hpp
#define Coin_hpp

#include <iostream>
using namespace std;

#endif /* Coin_hpp */

class Coin
{
  public:
    void toss();
    Coin();
    void getSideUp();
    void showTallies();
  private:
    string sideUp;
    int heads;
    int tails;
};
