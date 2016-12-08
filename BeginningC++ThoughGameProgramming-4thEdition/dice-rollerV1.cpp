// Might be a good example for teaching
// Created by Iidwuurliik on 12/7/2016.
// Add best 3 of 4 ver 2.0 + functions
// Add number of ability scores 3.0
// TODO functions for dice and array management

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
const int allowedRolls = 4; // for convenient control
const int requiredDice = 12; // for convenient control

int main() {

    /*
     * Computers generate pseudorandom numbers—not truly random numbers—based on a formula.
     * One way to think about this is to imagine that the computer reads from a huge book of
     * predetermined numbers. By reading from this book, the computer can appear to produce a
     * sequence of random numbers.But there’s a problem: The computer always starts reading the
     * book from the beginning. Because of this, the computer will always produce the same
     * series of “random” numbers in a program. In games, this isn’t something we’d want.
     * We wouldn’t, for example, want the same series of dice rolls in a game of craps every
     * time we played.A solution to this problem is to tell the computer to start reading from
     * some arbitrary place in the book when a game program begins. This process is called seeding
     * the random number generator. Game programmers give the random number generator a number,
     * called a seed, to determine the starting place in this sequence of pseudorandom numbers
     **/

    srand(static_cast<unsigned int>(time(0))); // seed random number generator - WTF?
    /*
     * Wow, that’s a pretty cryptic looking line, but what it does is simple.
     * It seeds the random number generator based on the current date and time,
     * which is perfect since the current date and time will be different for each run of the program.
     * */

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
            //cout << "You rolled a " << (randomNumber % requiredDice) + 1 << endl; // significantly slows down execution time
            characterRolls[i] = randomNumber % requiredDice + 1;
            i++;
        }
        for (int i = 0; i < allowedRolls; i++) {
            // cout << "numbers are -> " << characterRolls[i] << endl; // significantly slows down execution time
            total += characterRolls[i];
        }
        //cout << "==========Total Points=========== " << total << endl;
        required_counter += 1;
    } while (total != 48); // && total != 17 && total != 16 ); // pay attention its logical end

    cout << "Took   only -- >" << required_counter << " tries !" << endl; // had a 6800 on a 4 dice roll hehe :)!

    return 0;
}