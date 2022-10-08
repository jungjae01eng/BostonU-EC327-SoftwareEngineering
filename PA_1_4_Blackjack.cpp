// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 1 Question 4

#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

bool draw = true;

int main()
{
    cout << "Welcome to EC327 Blackjack" << endl;
    int card1, card2, total;
    bool draw;


    while(draw == true)
        srand(time(NULL));
        card1 = rand() % 13 + 1;
        card2 = rand() % 13 + 1;

        total = card1 + card2;

        cout << "Total: " << card1 << endl;
        card1 = rand() % 13 + 1;
        cout << "Total: " << card1 << endl;

}