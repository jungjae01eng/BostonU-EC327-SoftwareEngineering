// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 2 Question 2B
// October 30, 2022


#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double series(int n){
    double sum = 0;
    int count = 0;

    while(count != n){
        count++;
        sum = sum + (double)(2*count)/(3*count+2);
    }
    return sum;
}

int main(){
    int n;
    double seriesC;
    bool pass = false;

    do{
    cout << "Enter n: ";
    cin >> n;

        if (n < 0) {
            cout << "Error Occured. Please enter two positive integers." << endl;
            pass = true;
        } else {
            pass = false;
        }
    } while(pass);

    seriesC = series(n);

    cout << fixed << setprecision(4);
    cout << "Series(" << n << ") is: " << seriesC;


    return 0;
}