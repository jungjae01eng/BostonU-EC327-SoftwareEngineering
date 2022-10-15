// Jungjae Lee
// Boston University College of Engineering
// EC 327 Lab 3 Question 1
// October 4, 2022


#include <iostream>


using namespace std;

int nandrfactor(int)
{
	int counter = 1;
	int num = 1;
	//int num2 = 2;
	
	// First loop when num is 1, will be multiplied with num2, which is 2.
	// Since if num is 1, it will stay 1 regardless of how many time num * num.
	//num = num * num2;
	//counter ++;

	// Loop
	while (counter != n)
	{
	num *= counter;
	counter ++;
	}
	
	return num;
}

int nrfactor(int n, int r)
{
	int counter = 1;
	int num = 1;
	nr = n - r;

	while (counter = nr)
	{
	num *= nr;
	counter ++;
	} 
	
	return num;
}

int calculation (int nfact, int rfact, int nrfact)
{
	int cal;
	int cal2;
	cal2 = rfact * nrfact;
	cal = nfact / cal2;

	return cal;
}

int main()
{
	// Initializing number vairable
	int n;
	int r;

	// First Question to user
	cout << "How many coins would you like to flip?" << endl;
	cin >> n;

	// Second Question to user
	cout << "How many heads do you want?" << endl;
	cin >> r;

	// Sending n and r to calculation function
	int nfact = nandrfactor(n);
	int rfact = nandrfactor(r)
	int nrfact = nrfactor(n, r);
	int cal = calculation(nfact, rfact, nrfact);
	
	cout << n << endl;
	cout << r << endl;
	cout << nfact << endl;

	return 1;
}
