// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 1 Question 3

#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    // initializing number variable
    int counter;
    int num1, num2; // User Input
    //int counter;
    int result1;
    int remainder[6];

    // declare array - It will initialize 6 bits
    // int num1[6], num2[6];


    do {
        // receive numbers in between 0 to 100 from user
        cout << "Enter two numbers between 0-100: ";
        cin >> num1;
        cin >> num2;
    } while (num1 < 0 || num1 > 100);


    for (int counter = 0; counter < 6; counter++) {
        for (int counter_exp = 0; counter_exp < 3; counter_exp++){
            remainder[counter] = num1 % (int) round (pow(3, counter));
        }
    }
    cout << remainder[6] << endl;
    cout << "9";
}