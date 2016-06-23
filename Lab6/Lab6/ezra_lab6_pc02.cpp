//
//  main.cpp
//  Lab6
//
//  Created by Ezra Chang on 6/22/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
// 
// Rectangle Area—Complete the Program
//
// If you have downloaded this book’s source code from the companion Web site, you will find a partially written program named AreaRectangle.cpp in the Chapter 06 folder. (The companion Web site is at www.pearsonhighered.com/gaddis.) Your job is to complete the program. When it is complete, the program will ask the user to enter the width and length of a rectangle and then display the rectangle’s area. The program calls the following functions, which have not been written:
// • getLength – This function should ask the user to enter the rectangle’s length and then return that value as a double.
// • getWidth – This function should ask the user to enter the rectangle’s width and then return that value as a double.
// • getArea – This function should accept the rectangle’s length and width as argu- ments and return the rectangle’s area. The area is calculated by multiplying the length by the width.
// • displayData – This function should accept the rectangle’s length, width, and area as arguments and display them in an appropriate message on the screen.

// #include <iostream>
// using namespace std;
//
// // Function prototypes
// double getLength();
// double getWidth();
// double getArea(double, double);
// void displayData(double, double, double);
//
// int main()
// {
//     double length;  // To hold the rectangle's length
//     double width;	// To hold the rectangle's width
//     double area;	// To hold the rectangle's area
//
//     // Get the rectangle's length.
//     // Call the getLength() function and store the return value in length
//     length = getLength();
//
//     // Get the rectangle's width.
//     // Call the getWidth() function and store the return value in width
//     width = getWidth();
//
//     // Get the rectangle's area.
//     // Call the getArea() function, passing it the length and width as arguments
//     // and store the return value in area
//     area = getArea(length, width);
//
//     // Display the rectangle's data.
//     // Call the displayData() function, passing it the length and width and area as arguments
//     displayData(length, width, area);
//
//     return 0;
// }
//
// double getLength()
// {
//   double length = -1;
//   while (length < 0) {
//     cout << "Enter length: ";
//     cin >> length;
//   }
//   return length;
// }
//
// double getWidth()
// {
//   double width = -1;
//   while (width < 0) {
//     cout << "Enter width: ";
//     cin >> width;
//   }
//   return width;
// }
//
// double getArea(double length, double width)
// {
//   return length * width;
// }
//
// void displayData(double length, double width, double area)
// {
//   cout << "A rectangle of dimensions " << length << "x" << width << " has an area of " << area << "." << endl << endl;
// }
