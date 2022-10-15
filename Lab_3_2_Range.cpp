// Jungjae Lee
// Boston University College of Engineering
// EC 327 Lab 3 Question 2
// September 27, 2022

// The user should input three integers, start, stop, and step.
// If start is less than stop, then print all the numbers in ascending order with step as the increment.
// If start is greater than stop, the print all the numbers in descending order with step as the increment.
// If start is equal to stop, the program ends with "Bye, bye!" and terminate.

#include <iostream>

using namespace std;

int main(void)
{
	// Initializing number variables
	int start, stop, step;


	// Reading user input
	cout << "Start: ";
	cin >> start;
	
	cout << "Stop: ";
	cin >> stop;
	
	cout << "Step: ";
	cin >> step;


	do
	{
		if (start == stop)
		{
		cout << "Bye, bye!" << endl;
		}
		
	}while();
	
	
	return 0;
}
