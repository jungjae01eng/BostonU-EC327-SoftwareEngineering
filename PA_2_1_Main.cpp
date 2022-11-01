// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 2 Question 1
// October 30, 2022


#include <iostream>
#include <math.h>
#include <fstream>
#include "PA_2_1_Functions.h"
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

// Global define
extern const int ENTRIES = 10;  // specifies the maximum calculations performed by the program.


int main(){
    int count = 0;  // count the number of loop - maximum program can run is 10.
    char command;
    int parameters;
    bool pass;
    int printint;
    double printdouble;
    int pint;
    double pdouble;
    char pchar;
    int delta = 0;
    char *file;


    cout << setprecision(2) << fixed;
    
    cout << "-----" << endl;
    initialize(ENTRIES);
    cout << "-----" << endl;

    do{
        cout << "Please enter command code: ";
        cin >> command;

        pass = checkCode(command);

        
        if (command == 'Q' || command == 'q'){
            // quit the program
            cout << "Invalid command code" << endl;
            pass = false;
        }


        if (command == 'F' || command == 'f'){
            // factorial value
            cout << "Please enter command parameters: ";
            cin >> pint;
            printint = factorial(pint);
            cout << printint << endl;
        
        } else if (command == 'B' || command == 'b'){
            // fibonacci number
            cout << "Please enter command parameters: ";
            cin >> pint;
            printint = fibonacci(pint);
            cout << printint << endl;

        } else if (command == 'R' || command == 'r'){
            // compute square roots
            cout << "Please enter command parameters: ";
            cin >> pdouble;
            printdouble = findSqrtValue(pdouble);
            cout << printdouble << endl;

        } else if (command == 'U' || command == 'u'){
            // compute the area of square values
            cout << "Please enter command parameters: ";
            cin >> pdouble;
            printdouble = areaSquare(pdouble);
            cout << printdouble << endl;

        } else if (command == 'C' || command == 'c'){
            // compute the area of circle values
            cout << "Please enter command parameters: ";
            cin >> pdouble;
            printdouble = areaCircle(pdouble);
            cout << printdouble << endl;

        } else if (command == 'E' || command == 'e'){
            // compute even numbers
            cout << "Please enter command parameters: ";
            cin >> pint;
            printint = findNextEvenValue(pint);
            cout << printint << endl;


        } else if (command == 'K' || command == 'k'){
            // compute lucky numbers
            cout << "Please enter command parameters: ";
            cin >> pdouble;
            printdouble = lucky(pdouble);
            cout << printdouble << endl;

        } else if (command == 'S' || command == 's' || command == 'N' || command == 'n' || command == 'X' || command == 'x'){
            // compute sin, cosine, exponential
            cout << "Please enter command parameters: ";
            cin >> pdouble;

            printdouble = doMath(pdouble, command);
            cout << printdouble << endl;

        } else if (command == 'L' || command == 'l'){
            // compute natural logs
            cout << "Please enter command parameters: ";
            cin >> pdouble;
            printdouble = naturalLog(pdouble);
            cout << printdouble << endl;

        } else if (command == 'Y' || command == 'y'){
            // compute NyanCat value
            cout << "Please enter command parameters: ";
            cin >> pdouble;
            printdouble = findNyanCatValue(pdouble);
            cout << printdouble << endl;
        
        } else if (command == 'D' || command == 'd'){
            // compute even numbers
            cout << "Please enter command parameters: ";
            cin >> pint;
            printint = findNextOddValue(pint);
            cout << printint << endl;


        // Getting an string error but I do not have string.
        // } else if (command == "I" || command == "i"){
        //     // Read from Input file
        //     cout << "Please write the file name in following format ("filename.txt"): ";
        //     cin >> file;
        //     readDatafromFile(file);

        // } else if (command == "O" || command == "o"){
        //     // Read from Output file
        //     cout << "Please write the file name in following format ("filename.txt"): ";
        //     cin >> file;
        //     writeDataToFile(file);
        
        }

        cout << "pass: " << pass << endl;

        delta++;
    } while (pass && (delta != ENTRIES));


    return 0;
}