//
// Created by Iidwuurliik on 12/6/2016.
//

// Lost Fortune
// Not as brutal as intended

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    const int GOLD_PIECES = 900;
    int adventurers, killed, survivors;
    string leader;

    // user input
    cout << "Welcome to the 'LOST FORTUNE' adventure ! \n\n";
    cout << "Please enter a number of adventurers , that were travelling with you : ";
    cin >> adventurers;
    cout << "Please enter your name :  ";
    cin >> leader;

    killed = adventurers - adventurers / 2;
    survivors = adventurers - killed;

    cout << "\n A brave group of " << adventurers << " ventured into the depth of the beholder!";
    cout << "\n In search of the lost treasure of the Fallen Kingdom of Gozhurgut ... ";
    cout << "\n They were lead by a legend among rogues " << leader << "!";
    cout << "\n Along the way the adventurers went mad and killed each other ";
    cout << "\n Only " << survivors << " have survived";
    cout << "\n Finally they stumbled upon the hidden treasure.... and split it almost equally  ";
    if (GOLD_PIECES % survivors != 0) {
        cout << "\n " << leader << " held on the extra " << GOLD_PIECES % survivors << " gold pieces ....\n";
    }

    return 0;
}