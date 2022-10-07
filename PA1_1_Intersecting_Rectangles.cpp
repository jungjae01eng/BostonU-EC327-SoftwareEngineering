// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 1 Question 1

#include <iostream>
#include math.h

using namespace std;


int main()
{
    // initializing number variable
    int first_x, first_y, first_length, first_height;
    int second_x, second_y, second_length, second_height;
    int first_x_lenghh, first_y_height;


    // receive informations on FIRST rectangle from user
    cout << "Enter the information for the first rectangle" << endl;
    cout << "x-coordinate: ";
    cin >> first_x;
    cout << "y-coordinate: ";
    cin >> first_y;
    cout << "length: ";
    cin >> first_length;
    cout << "height: ";
    cin >> first_height;

    // receive informations on SECOND rectangle from user
    cout << "Enter the information for the first rectangle" << endl;
    cout << "x-coordinate: ";
    cin >> second_x;
    cout << "y-coordinate: ";
    cin >> second_y;
    cout << "length: ";
    cin >> second_length;
    cout << "height: ";
    cin >> second_height;


    // calculate FIRST rectangle location
    first_x_lenghh = first_x + first_length;
    first_y_height = first_y + first_height;
    

}