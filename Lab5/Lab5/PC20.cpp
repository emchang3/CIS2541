//
//  PC20.cpp
//  Lab5
//
//  Created by Ezra Chang on 6/20/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Random Number Guessing Game
//
// Write a program that generates a random number and asks the user to guess what the number is. If the user’s guess is higher than the random number, the program should display “Too high, try again.” If the user’s guess is lower than the random number, the program should display “Too low, try again.” The program should use a loop that repeats until the user correctly guesses the random number.

#include <iostream>
using namespace std;

#include "PC20.hpp"

void PC20::guess()
{
  int myNum, guess = -1;
  srand(time(NULL));
  myNum = rand() % 998 + 1;

  while(guess != myNum)
  {
    cout << "Guess a number between 1-1000: ";
    cin >> guess;

    if (guess > myNum)
    {
      cout << "Too big." << endl;
    }
    else if (guess < myNum)
    {
      cout << "Too small." << endl;
    }
    else
    {
      // Do nothing.
    }
  }

  cout << "Good job!";
}
