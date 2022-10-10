// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 1 Question 5

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    char user_input, encrypt;


    cout << "Enter a letter: ";
    cin >> user_input;

    if ((user_input > 64) && (user_input < 91) || (user_input > 96) && (user_input < 123)) {
        encrypt = user_input + 1;
        if (user_input == 90 || user_input == 122) {
            encrypt = 65;
        }
        if ((user_input > 96) && (user_input < 122)) {
            encrypt = encrypt - 33;
        }
    }

    cout << "CRYPTO: " << encrypt << endl;
    return 0;
}