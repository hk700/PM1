// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>


using std::cout;
using std::cin;
using std::endl;
using std::pow;


#include <iostream> 

int main() {
	int number;
	int	x = 1;
	int y = 0;




	cout << "Enter a number: ";
	cin >> number;




	while (x<number) {


		if (number%x == 0)
			y = y + x;
		x++;
	}

	if (y == number)
		cout <<"The number is perfect\n";
	else
		cout <<" The number is not perfect\n";
	

	return 0;
}
