// ConsoleApplication1.cpp : Defines the entry point for the console application.
//




// Lab 1: dice.cpp
#include "stdafx.h"
#include <iostream>
using std::cout;
using std::ios;

#include <iomanip>
using std::setw;
using std::setprecision;
using std::fixed;
using std::showpoint;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int main()
{
	const long ROLLS = 36000;
	const int SIZE = 13;

	int expected[SIZE] = { 0,0,1,2,3,4,5,6,5,4,3,2,1 };// array exepected contains counts for the expected
													  // number of times each sum occurs in 36 rolls of the dice
													  /* Write the declaration of array exprected here. Assign an
													  initializer list containing the expected values here. Use
													  SIZE for the number of elements */
	int x; // first die
	int y; // second die
	int sum[SIZE] = { 0 };	   /* Write declaration for array sum here. Initialize all
							   elements to zero. Use SIZE for the number of elements */

	srand(time(0));

	// roll dice 36,000 times
	/* Write a for statement that iterates ROLLS times. Randomly
	generate values for x (i.e., die1) and y (i,e, die2)
	and increment the appropriate counter in array sum that
	corresponds to the sum of x and y */
	for (int i = 1; i <= ROLLS; i++) {
		x = 1 + rand() % 6;
		y = 1 + rand() % 6;
		++sum[x + y];
	} /* end for */

	cout << setw(10) << "Sum" << setw(10) << "Total" << setw(10)
		<< "Expected" << setw(10) << "Actual\n" << fixed << showpoint;


	// display results of rolling dice
	for (int j = 2; j < SIZE; j++)
		cout << setw(10) << j << setw(10) << sum[j]
		<< setprecision(3) << setw(9)
		<< 100.0 * expected[j] / 36 << "%" << setprecision(3)
		<< setw(9) << 100.0 * sum[j] / 36000 << "%\n";


	return 0; // indicates successful completion
} // end main
