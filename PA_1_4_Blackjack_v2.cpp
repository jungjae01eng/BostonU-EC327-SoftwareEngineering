// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 1 Question 4

#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;


// Declare global variables
int total, result;
// bool draw;


int draw () {
    // initialize random seed
    srand(time(NULL));
    int card = rand() % 13 + 2;     // random number from 2 to 10 as well as 11 (A), 12 (J), 13 (Q), 14 (K)
                                    // four letters will convert to numbers after random numbers

    return card;
}


int results (int) {
    if (total == 21) {
        return 21;
    }
    else if (total > 21) {
        return -1;
    }
    else if (total < 21) {
        return total;
    }

    return 0;
}


int blackjack(int num1, int num2) {
    // -1 over 21, // 21 if is 21
    total = total + num1 + num2;

    total = results(total);


    return total;
}


int blackjack (int num1, char let2) {
    int num;

    if (let2 == 'A') {
        num = 11;
        total = total + num1 + num;
    }
    else if (let2 == 'J' || let2 == 'Q' || let2 == 'k') {
        num = 10;
        total = total + num1 + num;
    }

    total = results(total);


    return total;
}


int blackjack (char let1, int num2) {
    int num;

    if (let1 == 'A') {
        num = 11;
        total = total + num + num2;
    }
    else if (let1 == 'J' || let1 == 'Q' || let1 == 'k') {
        num = 10;
        total = total + num + num2;
    }

    total = results(total);


    return total;
}


int blackjack (char let1, char let2) {
    int num, num_2;

    if (let1 == 'A') {
        int num = 11;
    }
    else if (let1 == 'J' || let1 == 'Q' || let1 == 'k') {
        int num = 10;
    }
    else if (let2 == 'A') {
        int num_2 = 11;
    }
    else if (let2 == 'J' || let2 == 'Q' || let2 == 'k') {
        int num_2 = 10;
    }

    total = total + num + num_2;

    total = results(total);


    return total;
}


int blackjack (int num1) {
    total = total + num1;
    
    total = results(total);


    return total;
}


int blackjack (char let1) {
    int num;
    if (let1 == 'A') {
        num = 11;
    }
    else if (let1 == 'J' || let1 == 'Q' || let1 == 'k') {
        num = 10;
    }
    total = total + num;

    total = results(total);


    return total;
}


// void error(int total) {
//     cout << "Total: " << total << endl;
//     cout << "ERROR OCCURED [Program Exits]" << endl;


//     return;
// }


int main()
{
    int card, new_card;
    int card1, card2;
    int num1 = 0, num2 = 0, num = 0;
    char let1, let2;

    char user;
    // bool draw = true;

    cout << "Welcome to EC327 Blackjack" << endl;


    // First draw
    card1 = draw();
    card2 = draw();

    // Test
    cout << "card1: " << card1 << endl;
    cout << "card2: " << card2 << endl;

    if ((card1 <= 10) && (card2 <= 10)) {
        // both cards are number
        num1 = card1;
        num2 = card2;
        total = blackjack(num1, num2);
    }
    else if ((card1 == 11 || card2 == 11)) {
        if ((card1 == 11) && (card2 == 11)) {
            // both cards are letter
            let1 = 'A';
            let2 = 'A';
            total = blackjack(let1, let2);
        }
        else if (card1 == 11) {
            // first cards are letter and second cards are number
            let1 = 'A';
            num2 = card2;
            total = blackjack(let1, num2);
        }
        else if (card2 == 11) {
            // first cards are number and second cards are letter
            num1 = card1;
            let2 = 'A';
            total = blackjack(card1, let1); 
        }
    }
    else if (card1 == 12 || card2 == 12) {
        if ((card1 == 12) && (card2 == 12)) {
            // both cards are letter
            let1 = 'J';
            let2 = 'J';
            total = blackjack(let1, let2);
        }
        else if (card1 == 12) {
            // first cards are letter and second cards are number
            let1 = 'J';
            num2 = card2;
            total = blackjack(let1, num2);
        }
        else if (card2 == 12) {
            // first cards are number and second cards are letter
            num1 = card1;
            let2 = 'J';
            total = blackjack(num1, let1); 
        }
    }
    else if (card1 == 13) {
        if ((card1 == 13) && (card2 == 13)) {
            // both cards are letter
            let1 = 'Q';
            let2 = 'Q';
            total = blackjack(let1, let2);
        }
        else if (card1 == 13) {
            // first cards are letter and second cards are number
            let1 = 'Q';
            num2 = card2;
            total = blackjack(let1, num2);
        }
        else if (card2 == 13) {
            // first cards are number and second cards are letter
            num1 = card1;
            let2 = 'Q';
            total = blackjack(num1, let2); 
        }
    }
    else if (card1 == 14) {
        if ((card1 == 14) && (card2 == 14)) {
            // both cards are letter
            let1 = 'K';
            let2 = 'K';
            total = blackjack(let1, let2);
        }
        else if (card1 == 14) {
            // first cards are letter and second cards are number
            let1 = 'K';
            num2 = card2;
            total = blackjack(let1, num2);
        }
        else if (card2 == 14) {
            // first cards are number and second cards are letter
            num1 = card1;
            let2 = 'K';
            total = blackjack(num1, let1); 
        }
    }


    // if ((card1 && card2) <= 10) {
    //     // both cards are number
    //     total = blackjack(int card1, int card2);
    // }
    // else if ((card1 <= 10) && (card2 > 10)) {
    //     // first cards are number and second cards are letter
    //     total = blackjack(int card1, char let1);
    // }
    // else if ((card1 > 10) && (card2 <= 10)) {
    //     // first cards are letter and second cards are number
    //     total = blackjack(char let1, int card1);
    // }
    // else if ((card1 && card2) > 10) {
    //     // both cards are letter
    //     total = blackjack(char let1, char let2);
    // }

    // card = blackjack();
    // cout << card << endl;

    // new_card = blackjack();
    // card = card + new_card;

    // cout << "new card: " << new_card << endl;    
    // cout << "Total: " << card << endl;


    cout << "Total: " << total << endl;
    bool loop = true;

    // Starting second draw
    do {
        if (total == -1) {
            cout << "You bust" << endl;
            loop = false;
        }
        else if (total == 21) {
            cout << "WON BLACKJACK [Program Exits]" << endl;
            loop = false;
        }
        else if ((total != -2) && (total != 21)) {
            cout << "Draw Again (y/n): ";
            cin >> user;
        
            if (user == 'y') {
                // draw = true;
                card = draw();
            

                // test
                cout <<  "card: " << card << endl;


                if (card <= 10) {
                    // card is number
                    num = card;
                    total = blackjack(num);
                }
                else if (card == 11) {
                    // card is letter
                    let1 = 'A';
                    total = blackjack(let1);
                }
                else if (card == 12) {
                    // card is letter
                    let1 = 'J';
                    total = blackjack(let1);
                }
                else if (card == 13) {
                    // card is letter
                    let1 = 'Q';
                    total = blackjack(let1); 
                }
                else if (card == 14) {
                    // card is letter
                    let1 = 'K';
                    total = blackjack(let1); 
                }
                cout << "Total: " << total << endl;
            }
            else if (user == 'n') {
                cout << "YOU QUIT WITH " << total << "Program Exits" << endl;
                loop = false;
            }
            else if (user != 'y' && user != 'n') {
                // void error(total);
                cout << "Total: " << total << endl;
                cout << "ERROR OCCURED [Program Exits]" << endl;
                loop = false;
            }
        }
    } while (loop);


    // void error(int total);
    //     }
    // }


    // if (total == 21) {
    //     cout << "Total: " << card << endl;
    //     cout << "WON BLACKJACK [Program Exits]";
    // }
    // else if (total > 21) {
    //     cout << "Total: " << card << endl;
    //     cout << "FAILED BLACKJACK [Program Exits]";
    // }
    // else if (total < 21) {
    //     cout << "Total: " << card << endl;
    //     cout << "YOU QUIT WITH " << card << " [Program Exits]";


    return 0;
}