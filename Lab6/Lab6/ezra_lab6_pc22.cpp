//
//  ezra_lab6_pc22.cpp
//  Lab6
//
//  Created by Ezra Chang on 6/22/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// isPrime Function
//
// A prime number is a number that is only evenly divisible by itself and 1. For example, the number 5 is prime because it can only be evenly divided by 1 and 5. The number 6, however, is not prime because it can be divided evenly by 1, 2, 3, and 6.
// Write a function name isPrime, which takes an unsigned long longeger as an argument and returns true if the argument is a prime number, or false otherwise. Demonstrate the function in a complete program.

#include <iostream>
#include <climits>
#include <sys/time.h>
using namespace std;

bool isPrime(unsigned long long number)
{
  bool valid = true;
  unsigned long long counter = 2;
  while (valid && counter < number) {
    if (number % counter == 0) {
      valid = false;
    }
    counter++;
  }
  return valid;
}

int main()
{
  // Found this on StackOverflow.
  // struct timeval stop, start;
  // gettimeofday(&start, NULL);

  // unsigned long long input = ULLONG_MAX;
  unsigned long long input;
  cout << "Enter a positive integer: ";
  cin >> input;
  if (input > 0) {
    if (isPrime(input)) {
      cout << "Your number, " << input << ", is prime." << endl << endl;
    }
    else
    {
      cout << "Your number, " << input <<  ", is not prime." << endl << endl;
    }
  }
  else
  {
    cout << "Your input: invalid." << endl << endl;
  }

  // Found this on StackOverflow.
  // gettimeofday(&stop, NULL);
  // cout << stop.tv_usec - start.tv_usec << "us elapsed." << endl << endl;

  return 0;
}
