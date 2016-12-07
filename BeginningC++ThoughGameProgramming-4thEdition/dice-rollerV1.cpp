// Might be a good example for teaching
// Created by Iidwuurliik on 12/7/2016.
// Add best 3 of 4 ver 2.0
// Add number of ability scores 3.0

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
const int allowedRolls = 4; // for convenient control
const int requiredDice = 6; // for convenient control

int main() {

    srand(static_cast<unsigned int>(time(0))); // seed random number generator - WTF?
    int randomNumber; // generate random number
    int characterRolls[allowedRolls];

    //int die = (randomNumber % 6) +1 ; // get a number between 1 and 6
    int required_counter = 0; // counter of amount of 4 rolls required to achieve a maximum result
    int total;
    do {
        total = 0;
        int i = 0;
        while (i < allowedRolls) {
            randomNumber = rand();
            //cout << RAND_MAX << endl; // OK , const in rand , just to see my limit
         //   cout << "You rolled a " << (randomNumber % 6) + 1 << endl; // significantly slows down execution time
            characterRolls[i] = randomNumber % requiredDice + 1;
            i++;
        }

        for (int i = 0; i < allowedRolls; i++) {
            // cout << "numbers are -> " << characterRolls[i] << endl; // significantly slows down execution time
            total += characterRolls[i];
        }
        cout << "==========Total Points=========== " << total << endl;
        required_counter += 1;
    } while (total != 24); // && total != 17 && total != 16 ); // pay attention its logical end

    cout << "Took   only -- >" << required_counter << " tries !" << endl; // had a 6800 on a 4 dice roll hehe :)!

    return 0;
}