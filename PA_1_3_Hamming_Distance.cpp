// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 1 Question 3

#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    // initializing number variable
    int num1, num2; // User Input
    int result1[5] = {0};
    int result2[5] = {0};
    int remainder;
    int count_diff = 0;


    // receive numbers in between 0 to 100 from user
    do {
        cout << "Enter two numbers between 0-100: ";
        cin >> num1;
        cin >> num2;
    } while (num1 < 0 || num1 > 100);


    // find the remainder and result for num1
    do {
        remainder = num1;
        for (int counter = 4; counter >= 0; counter--) {
            result1[counter] = remainder / round (pow(3, counter));
            remainder = remainder % (int) round (pow(3, counter));
        }
    } while (remainder != 0);


    // find the remainder and result for num2
    do {
        remainder = num2;
        for (int counter = 4; counter >= 0; counter--) {
            result2[counter] = remainder / round (pow(3, counter));
            remainder = remainder % (int) round (pow(3, counter));
        }
    } while (remainder != 0);


    // get rid of the space that is filled with "0"
    int counter = 4;
    while (result1[counter] == 0 && result2[counter] == 0) {
        counter--;
    }


    // count different numbers
    while (counter >= 0) {
        if (result1[counter] != result2[counter]) {
            count_diff++;
        }
        counter--;
    }


    // cout << "NUM1" << endl;
    // cout << "0: " << result1[0] << endl;
    // cout << "1: " << result1[1] << endl;
    // cout << "2: " << result1[2] << endl;
    // cout << "3: " << result1[3] << endl;
    // cout << "4: " << result1[4] << endl;
    // cout << endl << "NUM2" << endl;
    // cout << "0: " << result2[0] << endl;
    // cout << "1: " << result2[1] << endl;
    // cout << "2: " << result2[2] << endl;
    // cout << "3: " << result2[3] << endl;
    // cout << "4: " << result2[4] << endl;

    cout << "Hamming distance between " << num1 << " and " << num2 << " when numbers are in ternary format is: " << count_diff << ". [Program Exits]" << endl;
}