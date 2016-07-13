//
//  ezra_lab9_pc2.cpp
//  Lab9
//
//  Created by Ezra Chang on 7/10/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// Test Scores #2
//
// Modify the program of Programming Challenge 2 to allow the user to enter name-score pairs. For each student taking a test, the user types the student’s name followed by the student’s integer test score. Modify the sorting function so it takes an array holding the student names and an array holding the student test scores. When the sorted list of scores is displayed, each student’s name should be displayed along with his or her score. In stepping through the arrays, use pointers rather than array subscripts.

#include <iostream>
#include <memory>
#include <string>
using namespace std;

void selection(int * unsortedInts, string * unsortedStrings, int NUM)
{
  int * thing = unsortedInts;
  int * addtnlRef = unsortedInts;
  string * str = unsortedStrings;
  string * addStrRef = unsortedStrings;

  int largIntVal = *thing;
  int * largIntLoc = thing;
  string largStrVal = *str;
  string * largStrLoc = str;

  int * upperLimit = &unsortedInts[NUM - 1];
  string * strUpLim = &unsortedStrings[NUM - 1];
  int limit = NUM - 1;
  int intHolder;
  string strHolder;

  // cout << "---INITIAL---" << endl;
  // for (int k = 0; k < NUM; k++) {
  //   cout << unsortedInts[k] << endl;
  // }
  // cout << "-------------" << endl;

  while (limit >= 1)
  {
    for (int i = 0; i <= limit; i++)
    {
      if (*thing > largIntVal)
      {
        largIntVal = *thing;
        largIntLoc = thing;
        largStrVal = *str;
        largStrLoc = str;
      }
      thing++;
      str++;
    }
    thing = addtnlRef;
    str = addStrRef;

    intHolder = *upperLimit;
    strHolder = *strUpLim;

    *upperLimit = largIntVal;
    *strUpLim = largStrVal;

    *largIntLoc = intHolder;
    *largStrLoc = strHolder;

    upperLimit--;
    strUpLim--;

    limit -= 1;
    largIntVal = *thing;
    largIntLoc = thing;
    largStrVal = *str;
    largStrLoc = str;
  }

  cout << endl << "Scores in ascending order:" << endl << "-------------------------" << endl;
  for (int k = 0; k < NUM; k++) {
    cout << unsortedStrings[k] << ": " << unsortedInts[k] << endl;
  }
}

void average(int * scores, int length)
{
  double sum = 0;
  double number = (double)length;
  for (int l = 0; l < length; l++)
  {
    sum += (double) *scores;
    scores++;
  }
  cout << endl << "Average score: " << endl << "-------------------------" << endl;
  cout << sum / number << endl;
}

void takeInput()
{
  cout << "(Enter a negatve score after finished entering grades)." << endl;
  int max = 1;
  int * intArray = new int[max];
  string * stringArray = new string[max];
  int i = 0;
  int intInput;
  string stringInput;

  cout << "Enter name: ";
  cin >> stringInput;
  cout << "Enter score: ";
  cin >> intInput;

  while (intInput >= 0)
  {
    stringArray[i] = stringInput;
    intArray[i] = intInput;
    i++;

    if (i >= max) {
      max += 1;
      int * temp = new int[max];
      string * temp2 = new string[max];
      for (int j = 0; j < i; j++)
      {
        temp[j] = intArray[j];
        temp2[j] = stringArray[j];
      }
      // For some reason, I don't have to delete the old allocated memory before reassigning.
      // delete [] intArray;
      intArray = temp;
      stringArray = temp2;
      // Deleting these pointers have deleterious effects. I must be doing it at the wrong time.
      // delete [] temp;
      // delete [] temp2;
    }

    cout << "Enter name: ";
    cin >> stringInput;
    cout << "Enter score: ";
    cin >> intInput;
  }

	selection(intArray, stringArray, i);
  average(intArray, i);
}

int main()
{
  takeInput();
  return 0;
}
