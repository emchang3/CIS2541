//
//  main.cpp
//  Lab11b
//
//  Created by Ezra Chang on 7/24/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// PC12: Course Grade

#include <iostream>
#include <iomanip>
using namespace std;

struct student
{
  char Name[19];
  char Idnum[9];
  double *Tests;
	double Average;
  char Grade;
};

int main()
{
  cout << "How many students? ";
  int classSize;
  cin >> classSize;

  if (classSize <= 0)
  {
    cout << "Class size invalid." << endl;
    return classSize;
  }

  student *myClass = new student[classSize];

  cout << "How many tests? ";
  int numberOfTests;
  cin >> numberOfTests;

  if (numberOfTests <= 0)
  {
    cout << "Number of tests invalid." << endl;
    return numberOfTests;
  }

  student *iteratorOne = myClass;
  for (size_t t = 0; t < classSize; t++)
  {
    iteratorOne->Tests = new double[numberOfTests];
    double *testerator = iteratorOne->Tests;
    cout << endl;
    cout << "Student " << t + 1 << endl << endl;
    cout << "Enter student name (limit 19 char): ";
    cin.ignore(1000, '\n');
    cin.getline(iteratorOne->Name, 19);
    cout << "Enter student ID (limit 9 char): ";
    // cin.ignore(1000, '\n');
    cin.getline(iteratorOne->Idnum, 9);
    double runningTotal = 0;
    for (size_t m = 0; m < numberOfTests; m++)
    {
      cout << "Enter test score " << m + 1 << ": ";
      cin >> *testerator;

      if (*testerator < 0 || *testerator > 100)
      {
        cout << "Score invalid!" << endl;
        return -1;
      }

      runningTotal += *testerator;
      testerator++;
    }

    iteratorOne->Average = runningTotal / numberOfTests;

    if (iteratorOne->Average >= 94)
    {
      iteratorOne->Grade = 'A';
    }
    else if (iteratorOne->Average >= 80 && iteratorOne->Average < 94)
    {
      iteratorOne->Grade = 'B';
    }
    else if (iteratorOne->Average >= 70 && iteratorOne->Average < 80)
    {
      iteratorOne->Grade = 'C';
    }
    else if (iteratorOne->Average >= 60 && iteratorOne->Average < 70)
    {
      iteratorOne->Grade = 'D';
    }
    else
    {
      iteratorOne->Grade = 'F';
    }
    iteratorOne++;
  }

  student *iteratorTwo = myClass;
  cout << endl;
  cout << setw(20) << left << "Name" << setw(10) << left << "ID" << setw(10) << right << "Test Avg" << setw(10) << right << "Grade" << endl;
  for (size_t d = 0; d < 50; d++) {
    cout << "-";
  }
  cout << endl;
  for (size_t c = 0; c < classSize; c++) {
    cout << setw(20) << left << iteratorTwo->Name << setw(10) << left << iteratorTwo->Idnum << setw(10) << right << setprecision (2) << fixed << iteratorTwo->Average << setw(10) << right << iteratorTwo->Grade << endl;
    iteratorTwo++;
  }

  return 0;
}
