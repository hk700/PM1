#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{

	int year;
	int month;
	int leapyear;


	cout << "Please enter the year \n";
	cin >> year;
	cout << "Please enther the month \n";
	cin >> month;

	if ((year % 4) || ((year % 100==0) && (year % 400)))
		leapyear = 0;
	else
		leapyear = 1;

	switch (leapyear)
	{
	case 0:
		cout << "The number of days is 365\n";
	case 1:
		cout << "The number of days is 366\n";
	}

	if (month == 1 && month == 3 && month == 5 && month == 7 && month == 8 && month == 10 && month == 11)
		month = 1;
	else if (month == 2)
		month = 2;
	else
		month = 3;

	switch (month)
	{
	case 1:
		cout << "The number of days is 31\n"<<endl;
	case 2:
		cout << "The number of days is 28\n"<<endl;
	case 3:
		cout << "The number of days is 30\n"<<endl;
	}
	return 0;
}