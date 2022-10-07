// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 1 Question 2

#include <iostream>
#include math.h

using namespace std;

int main()
{
    // initializing number variable
    int type;
    double celsius, fahrenheit, kelvin;

    // receive conversion type from user
    do
    {
        cout << "Celsius to Fahrenheit (enter 0)" << endl;
        cout << "Celsius to Kelvin (enter 1)" << endl;
        cout << "Fahrenheit to Celsius (enter 2)" << endl;
        cout << "Fahrenheit to Kelvin (enter 3)" << endl;
        cout << "Kelvin to Celsius (enter 4)" << endl;
        cout << "Kelvin to Fahrenheit (enter 5)" << endl;
        cout << "Conversion type: ";
        cin >> type;
    } while (type <= 0 || type < 6);

    if (type == 0)
    {
        // Celsius to Fahrenheit
        cout << "Enter the amount in Celsius: " cin >> celsius;
        fahrenheit = (celsius * 9 / 5) + 32;
        cout << celsius << "Celsius is " << fahrenheit << "Fahrenheit. [Program Exits]"
    }
    else if (type == 1)
    {
        // Celsius to Kelvin
        cout << "Enter the amount in Celsius: " cin >> celsius;
        kelvin = celsius + 273.15;
        cout << celsius << "Celsius is " << kelvin << "Kelvin. [Program Exits]"
    }
    else if (type == 2)
    {
        // Fahrenheit to Celsius
        cout << "Enter the amount in Celsius: " cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5 / 9;
        cout << fahrenheit << "Fahrenheit is " << celsius << "Celsius. [Program Exits]"
    }
    else if (type == 3)
    {
        // Fahrenheit to Kelvin
        cout << "Enter the amount in Celsius: " cin >> fahrenheit;
        kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;
        cout << fahrenheit << "Fahrenheit is " << kelvin << "Kelvin. [Program Exits]"
    }

    return 0;
}