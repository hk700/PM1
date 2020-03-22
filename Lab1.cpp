// ConsoleApplication3.cpp : Defines the entry point for the console application.
//


/*************************************************************************
//																		//
//	Programming Methodologies Lab (14:332:254)							//
//	Laboratory A - Introduction to Microsoft Visual Studio C++ 2003		//
//																		//
//	YOUR NAME															//
//	YOUR SECTION														//
//	TODAYS DATE															//
//																		//
*************************************************************************/

#include "stdafx.h"
#include <iostream> // allows program to perform input and output

using std::cout; // program uses cout
using std::endl; // program uses endl
using std::cin; // program uses cin

int main()
{
	int number1; // first integer read from user
	int number2; // second integer read from user
	int number3; // third integer read from user
	int smallest; // smallest integer read from user
	int largest; // largest integer read from user

	cout << "Input first integer: \n"; // prompt
	cin >> number1; // read an integer
	cout << "Input second integer: \n"; // prompt
	cin >> number2; // read a second integer
	cout << "Input third integer: \n"; // prompt
	cin >> number3; // read a third integer

	largest = number1; // assume first integer is largest

	if (number2 > largest) // is number2 larger?
		largest = number2; // number2 is now the largest

	if (number3 > largest) // is number3 larger?
		largest = number3; // number3 is now the largest

	smallest = number1; // assume first integer is smallest

	if (number2 < smallest) // is number2 smaller?
		smallest = number2; // number2 is now the smallest

	if (number3 < smallest) // is number3 smaller?
		smallest = number3; // number3 is now the smallest

	cout << "Sum is \n" << number1 + number2 + number3
		<< "\nAverage is \n" << (number1 + number2 + number3) / 3
		<< "\nProduct is \n" << number1 * number2 * number3
		<< "\nSmallest is \n" << smallest
		<< "\nLargest is \n" << largest << endl;

	return 0; // indicate successful termination

} // end main


  /**************************************************************************
  * (C) Copyright 1992-2005 by Deitel & Associates, Inc. and               *
  * Pearson Education, Inc. All Rights Reserved.                           *
  *                                                                        *
  * DISCLAIMER: The authors and publisher of this book have used their     *
  * best efforts in preparing the book. These efforts include the          *
  * development, research, and testing of the theories and programs        *
  * to determine their effectiveness. The authors and publisher make       *
  * no warranty of any kind, expressed or implied, with regard to these    *
  * programs or to the documentation contained in these books. The authors *
  * and publisher shall not be liable in any event for incidental or       *
  * consequential damages in connection with, or arising out of, the       *
  * furnishing, performance, or use of these programs.                     *
  **************************************************************************/