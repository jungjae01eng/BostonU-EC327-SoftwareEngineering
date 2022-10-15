// Jungjae Lee
// Boston University College of Engineering
// EC 327 Lab 3


#include <iostream>

using namespace std;

int main(void)
{
	// initializing number variable
	int num;

	cout << "Please input non-negative integer that is larger than 0 but less than 10." << endl;

	// reading user input
	cin >> num;
	

	do{
		cout << "N: " << num;
		if (num == 9) {
			cout << "        9\n";
		}
		if (num >= 8) {
			cout << "       8\n";
		}
		else if (num >= 7) {
			cout << "      7\n";
		}
		else if (num >= 6) {
			cout << "     6\n";
		}
		else if (num >= 5) {
			cout << "    5\n";
		}
		else if (num >= 4) {
			cout << "   4\n";
		}
		else if (num >= 3) {
			cout << "  3\n";
		}
		else if (num >= 2) {
			cout << " 2\n";
		}
		else if (num >= 1) {
			cout << "1\n";
			break;
		}
	
	}while (num > 0 || num < 10);
	
	
	return 0;
}
