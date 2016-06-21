//
//  main.cpp
//  Lab5
//
//  Created by Ezra Chang on 6/20/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//

#include <iostream>
using namespace std;
#include "PC1.hpp"
#include "PC2.hpp"
#include "PC6.hpp"
#include "PC20.hpp"
#include "PC24.hpp"

int main()
{
    cout << "PC1: Sum of Numbers." << endl << endl;
    PC1 pc1;
    pc1.sum();
    cout << endl << endl;

    cout << "PC2: Characters for the ASCII Codes.";
    PC2 pc2;
    pc2.characters();
    cout << endl << endl;

    cout << "PC6: Distance Traveled." << endl << endl;
    PC6 pc6;
    pc6.distance();
    cout << endl << endl;

    cout << "PC24: Using Files—Numeric Processing." << endl << endl;
    PC24 pc24;
    pc24.process();
    cout << endl << endl;

    cout << "PC20: Random Number Guessing Game." << endl << endl;
    PC20 pc20;
    pc20.guess();
    cout << endl << endl;

    return 0;
}
