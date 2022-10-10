// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 1 Question 1

#include <iostream>
#include <math.h>

using namespace std;

void print_Intersect() {
    cout << "THE RECTANGLES INTERSECT [Program Exits]" << endl;
}
void print_Do_Not_Intersect() {
    cout << "THE RECTANGLES DO NOT INTERSECT [Program Exits]" << endl;
}

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
    cout << "Enter the information for the second rectangle" << endl;
    cout << "x-coordinate: ";
    cin >> second_x;
    cout << "y-coordinate: ";
    cin >> second_y;
    cout << "length: ";
    cin >> second_length;
    cout << "height: ";
    cin >> second_height;


    // calculate rectangles location
    first_x_lenghh = first_x + first_length;
    first_y_height = first_y + first_height;


    if (((second_y - first_y) <= first_height) || ((first_y - second_y) <= second_height)) { // rectangle 1 and 2 are on the same range in y-aixes
        if (second_x >= first_x) {  // second_x is on the RIGHT side of first_x
            if ((second_y - first_y) >= 0) {    // second_y is ABOVE the first_y
                if ((second_y - first_y) > first_height) {
                    // cout << "1" << endl;
                    print_Do_Not_Intersect();
                    return 0;
                }
                else if ((second_y - first_y) <= first_height) {
                    // cout << "2" << endl;
                    print_Intersect();
                    return 0;
                }
            }
            else if ((second_y - first_y) < 0) {    // second_y is BELOW the first_y
                if ((first_y - second_y) > second_height) {
                    // cout << "3" << endl;
                    print_Do_Not_Intersect();
                    return 0;
                }
                else if ((first_y - second_y) <= second_height) {
                    // cout << "4" << endl;
                    print_Intersect();
                    return 0;
                }
            }
        }
        else if (second_x < first_x) {  // second_x is on the LEFT side of first_x
            if ((first_y - second_y) >= 0) {    // first_y is ABOVE the second_y
                if ((first_y - second_y) > second_height) {
                    // cout << "5" << endl;
                    print_Do_Not_Intersect();
                    return 0;
                }
                else if ((first_y - second_y) <= second_height) {
                    // cout << "6" << endl;
                    print_Intersect();
                    return 0;
                }
            }
            else if ((second_y - first_y) > 0) {    // first_y is BELOW the second_y
                if ((second_y - first_y) > first_height) {
                    // cout << "7" << endl;
                    print_Do_Not_Intersect();
                    return 0;
                }
                else if ((second_y - first_y) <= first_height) {
                    // cout << "8" << endl;
                    print_Intersect();
                    return 0;
                }
            }
        }
    }
    else {
        print_Do_Not_Intersect();
    }
}