// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 2 Question 1
// October 30, 2022


#include <iostream>
#include <math.h>
using namespace std;


void initialize(int E){
    cout << "EC327: Introduction to Software Engineering" << endl;
    cout << "Fall 2022" << endl;
    cout << "Programming Assignment 2" << endl;
    cout << "Value of Entries is: " << E << endl;

    return;
}

bool checkCode(char command){
    // return true if the command code in parameter is a legal code character. Otherwise, return false
    char possibility[32] = {'F', 'f', 'B', 'b', 'R', 'r', 'U', 'u', 'C', 'c', 'E', 'e', 'K', 'k', 'S', 's', 'N', 'n', 'X', 'x', 'L', 'l', 'Y', 'y', 'D', 'd', 'I', 'i', 'O', 'o', 'Q', 'q'};


    for (int i = 0; i < 32; i++) {
        if(command == possibility[i]){
            cout << "yes" << endl;
            if (possibility[i] == 'Q' || possibility[i] == 'q'){
                return false;
            } else{
                return true;
            }
            return true;
        }
        cout << i << possibility[i] << endl;
    }
    return false;
}

// void writeDataToFile(const char*name){
    
// }

// void readDatafromFile(const char* name){
//     // read file

//     ifstream f;
//     f.open(name);
//     char c;
//     while (true){
//         if (f.eof()){
//             break;
//         } else {
//             cout << c << " ";
//         }
//     }
//     cout << endl;
//     f.close();

//     return;
// }

int factorial(int p){
    // returns the factorial value of the given integer argument
    int j = 1;
    for (int i; i <= p; i++){
        j *= i;
    }

    return j;
}

int fibonacci(int p){
    // returns the Fibonacci number at the index given by the provided argument
    if (p <= 1){
        return p;
    } else {
        return fibonacci(p - 1) + fibonacci(p - 2);
    }
}

double findSqrtValue(double p){
    // returns the square root of the argument
    return sqrt(p);
}

double naturalLog(double p){
    // returns the natural log of the provided argument
    return log(p);
}

double areaCircle(double r){
    // returns the area of a circle provided the radius
    return 3.14 * r * r;
}

double areaSquare(double p){
    // returns area of a square provided the length of its side
    return sqrt(p);
}

int findNextOddValue(int p){
    // returns an odd number closest and higer to the provided number
    if (p%2 == 0){
        p += 1;
    } else {
        p += 2;
    }
    return p;
}

int findNextEvenValue(int p){
    // returns an even number closest and higer to the provided number
    if (p%2 == 0){
        p += 2;
    } else {
        p += 1;
    }
    return p;
}

double findNyanCatValue(double p){
    // return calculation
    return (pow((4 * p), p) + p + 10);
}

double doMath(double p, char ch){
    // performs sin, cosine, or the exponential function for the value provided. The operation to perform is based on the char that is provided.
    if (ch == 'S' || ch == 's'){
        return sin(p);
    } else if(ch == 'C' || ch == 'c'){
        return cos(p);
    } else if(ch == 'E' || ch == 'e'){
        return exp(p);
    } else {
        return 0;
    }
}

double lucky(double){
    // returns a random number using the system time and the argument as a seed

    return 0;
}