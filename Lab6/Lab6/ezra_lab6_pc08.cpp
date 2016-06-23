//
//  ezra_lab6_pc08.cpp
//  Lab6
//
//  Created by Ezra Chang on 6/22/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Coin Toss
//
// Write a function named coinToss that simulates the tossing of a coin. When you call the function, it should generate a random number in the range of 1 through 2. If the random number is 1, the function should display “heads.” If the random number is 2, the function should display “tails.” Demonstrate the function in a program that asks the user how many times the coin should be tossed and then simulates the tossing of the coin that number of times.

// #include <iostream>
// using namespace std;
//
// void toss(int times)
// {
//   srand(time(NULL));
//   for(int i = 0; i < times; i++)
//   {
//     int random = rand() % 2 + 1;
//     if (random == 1) {
//       cout << "Heads." << endl;
//     }
//     else
//     {
//       cout << "Tails." << endl;
//     }
//   }
//   cout << endl;
// }
//
// int main()
// {
//   int times;
//   cout << "How many times would you like to toss the coin? ";
//   cin >> times;
//   if (times > 0) {
//     toss(times);
//   }
//   return 0;
// }
