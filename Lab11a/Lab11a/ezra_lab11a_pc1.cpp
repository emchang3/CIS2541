//
//  main.cpp
//  Lab11a
//
//  Created by Ezra Chang on 7/18/16.
//  Copyright © 2016 Ezra Chang. All rights reserved.
//
// 1. Movie Data
//
// Write a program that uses a structure named MovieData to store the following infor- mation about a movie:
// Title
// Director
// Year Released
// Running Time (in minutes)
// The program should create two MovieData variables, store values in their members, and pass each one, in turn, to a function that displays the information about the movie in a clearly formatted manner.
//
// 2. Movie Profit
//
// Modify the Movie Data program written for Programming Challenge 1 to include two additional members that hold the movie’s production costs and first-year revenues. Modify the function that displays the movie data to display the title, director, release year, running time, and first year’s profit or loss.

#include <iostream>
using namespace std;

struct MovieData
{
	string title, director;
	int year, length;
	double cost, firstYearRevenue;
};

void displayData(MovieData data)
{
	cout << "Title: " << data.title << endl;
	cout << "Director: " << data.director << endl;
	cout << "Release year: " << data.year << endl;
	cout << "Running time: " << data.length << "min" << endl;
	cout << "Box office profit: $" << data.firstYearRevenue - data.cost << "mil" << endl;
}

int main()
{
	MovieData hero;
	hero.title = "Hero";
	hero.director = "Zhang Yimou";
	hero.year = 2002;
	hero.length = 99;
	hero.cost = 31;
	hero.firstYearRevenue = 177.4;

	MovieData matrix;
	matrix.title = "The Matrix";
	matrix.director = "The Wachowski Brothers";
	matrix.year = 1999;
	matrix.length = 136;
	matrix.cost = 63;
	matrix.firstYearRevenue = 463.5;

	displayData(hero);
	cout << endl;
	displayData(matrix);
	return 0;
}
