// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 1 Question 5

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    // initializing number variable
    char user_input, encrypt;

    // user input
    cout << "Enter a letter: ";
    cin >> user_input;

    if ((user_input > 64) && (user_input < 91) || (user_input > 96) && (user_input < 123)) {    // user input is alphabet
        encrypt = user_input + 1;
        if (user_input == 90 || user_input == 122) {    // user input is either uppercase or lowercase "z"
            encrypt = 65;
        }
        if ((user_input > 96) && (user_input < 122)) {  // user input is in lowercase
            encrypt = encrypt - 32;
        }
        cout << "CRYPTO: " << encrypt << " [Program Exits]" << endl;
    }
    else {  // User input is NOT alphabet
        cout << "YOU DID NOT ENTER A LETTER [Program Exits]";
    }


    return 0;
}