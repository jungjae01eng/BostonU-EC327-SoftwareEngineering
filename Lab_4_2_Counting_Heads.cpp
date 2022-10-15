// Jungjae Lee
// Boston University College of Engineering
// EC 327 Lab 4 Question 2
// October 4, 2022


#include <iostream>

using namespace std;

int nandrfactor(int x)
// individual n and r factorial calculation
{
	int counter = 1;
	int num = 1;
	
	if (x <= 2) {
		return x;
	}
	else if (x > 2) {

		// Loop
		do
		{
			num *= x;
			x--;
		} while (x != 0);
	}


	return num;
}

int nrfactor(int n, int r)
// n minus r factorial calculation
{
	int counter = 1;
	int num = 1;
	int nr = n - r;

	do
	{
		num *= nr;
		nr --;
	} while (nr != 0);


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
	int n, r;
	char user;
	bool repeat1, repeat2;

	do {
	// First Question to user
	cout << "How many coins would you like to flip? ";
	cin >> n;

	// Second Question to user
	cout << "How many heads do you want? ";
	cin >> r;

		if (n >= 0 && r >= 0) {
			// Sending n and r to calculation function
			int nfact = nandrfactor(n);
			int rfact = nandrfactor(r);
			int nrfact = nrfactor(n, r);
			int total = calculation(nfact, rfact, nrfact);
	
			cout << "Flipping " << n << " coins, we can get " << r << " heads " << total << " ways." << endl;
		}
		else {
			cout << "ERROR: n AND r HAS TO BE NON-NEGATIVE. PLEASE TRY AGAIN." << endl;
		}

		do {
			cout << "Flip again? (y/n) ";
			cin >> user;

			if (user == 'y') {
				repeat1 = true;
				repeat2 = false;
			}
			else if (user == 'n') {
				repeat1 = false;
				repeat2 = false;
			}
			else {
				cout << "ERROR: PLEASE ENTER y FOR YES OR n FOR NO." << endl;
				repeat2 = true;
			}
		} while (repeat2 == true);
	} while (repeat1 == true);


	return 0;
}
