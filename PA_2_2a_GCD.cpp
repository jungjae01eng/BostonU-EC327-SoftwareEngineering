// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 2 Question 2A
// October 30, 2022


#include <iostream>

using namespace std;

int gcd(int m, int n){
    int div;

    div = m%n;

    if (div == 0) {
        return n;
    } else {
        return gcd(n, m%n);
    }
}

int main(){
    int m, n, gcdC;
    bool pass = false;
    // ask questions to users

    do {
        cout << "Welcome to the GCD Calculator. Please enter two positive integers." << endl;
        cout << "Enter m: ";
        cin >> m;
        cout << "Enter n: ";
        cin >> n;

        if (m < 0 || n < 0) {
            cout << "Error Occured. Please enter two positive integers." << endl;
            pass = true;
        }
        else {
            pass = false;
        }
    } while (pass);

    gcdC = gcd(m, n);

    cout << "GCD is: " << gcdC << endl;


    return 0;
}
