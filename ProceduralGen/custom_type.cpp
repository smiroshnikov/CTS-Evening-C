//
// Created by Iidwuurliik on 12/6/2016.
//
#include <iostream>

using namespace std;

int main() {
    enum difficulty {
        // game difficulty - return numeric values
                NOVICE, EASY, NORMAL, HARD, UNBEATABLE
    };

    enum shipCost {
        // BOMBER_COST if not initialized will be FIGHTER_COST+1
                FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50
    };


    difficulty gameDifficulty = difficulty(0);
    difficulty playerDifficulty = EASY;
    shipCost playerShipCost = BOMBER_COST;

    std::cout << "You difficulty is : " << gameDifficulty << std::endl;
    cout << "Currently value of ship type is " << playerShipCost << endl;
    cout << "ship cost is located at " << &playerShipCost ;
    cout <<  "\nTo Upgrade your ship to a Cruiser will cost " << (CRUISER_COST - playerShipCost)<< endl;


    switch (playerDifficulty) {

        case NOVICE: {
            cout << "NOVICE" << endl;
            break;
        }
        case EASY : {
            cout << "\nChosen difficulty is EASY!" << endl;
            break;
        }
    }


    return 0;
}