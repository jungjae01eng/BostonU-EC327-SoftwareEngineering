// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 1 Question 4

#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

bool draw;

int drawcard() {
    // initialize random seed
    srand(time(NULL));
    int card = rand() % 12 + 2;


    return card;
}

int blackjack() {
    int card, new_card, total;
    char user;
    bool draw = true;

    cout << "Welcome to EC327 Blackjack" << endl;
    
    card = drawcard();
    cout << card << endl;
    new_card = drawcard();
    card = card + new_card;

    cout << "new card: " << new_card << endl;    
    cout << "Total: " << card << endl;
    
    while (draw && card < 21) {
        cout << "Draw Again (y/n): ";
        cin >> user;
        
        if (user == 'y') {
            draw = true;
            new_card = drawcard();
            card = card + new_card;
            cout << "new card: " << new_card << endl;
            cout << "Total: " << card << endl;
        }
        else if (user == 'n') {
            draw = false;
        }
        else if (user != 'y' && user != 'n') {
            void error(int card);
        }
    }

    if (card == 21) {
        cout << "Total: " << card << endl;
        cout << "WON BLACKJACK [Program Exits]";
    }
    else if (card > 21) {
        cout << "Total: " << card << endl;
        cout << "FAILED BLACKJACK [Program Exits]";
    }
    else if (card < 21) {
        cout << "Total: " << card << endl;
        cout << "YOU QUIT WITH " << card << " [Program Exits]";
    }


    return 0;
}

void error(int card) {
    cout << "Total: " << card << endl;
    cout << "ERROR OCCURED [Program Exits]" << endl;


    return;
}

int main()
{
    blackjack();


    return 0;
}