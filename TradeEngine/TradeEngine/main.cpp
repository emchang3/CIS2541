//
//  main.cpp
//  TradeEngine
//
//  Created by Ezra Chang on 6/20/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main()
{
  string ticker, code = "e";
  string filename = "trades.txt";
  double price;
  ofstream tradefile;

  cout << "Quit (y)? ";
  cin >> code;

  while (code != "y") {
    // Ask trader for price.
    cout << "Ticker? ";
    cin >> ticker;
    cout << "Trade price for " << ticker << "? ";
    cin >> price;
    cout << ticker << " for " << price << "." << endl;

    // Write price to file.
    tradefile.open(filename, std::ios_base::app);
    if (tradefile.fail())
    {
      cout << "File open fail." << endl;
    }
    else
    {
      tradefile << setw(10) << left << ticker << setw(10) << right << price << endl;
    }
    tradefile.close();

    cout << "Quit (y)? ";
    cin >> code;
  }

  ifstream tf2;
  string temp;
  tf2.open(filename);
  if (tf2.fail())
  {
    cout << "File open fail." << endl;
  }
  else
  {
    temp.assign( (std::istreambuf_iterator<char>(tf2)), (std::istreambuf_iterator<char>()) );
    cout << temp;
  }
  tf2.close();

  return 0;
}
