// Might be a good example for teaching
// Created by Iidwuurliik on 12/7/2016.
// Add best 3 of 4 ver 2.0 + functions
// Add number of ability scores 3.0
// TODO functions for dice and array management

#include <iostream>
#include <cstdlib>
#include <ctime>

void printRollList(int []);

int randomRoll(int);

using namespace std;
const int allowedRolls = 4; // for convenient control
const int requiredDice = 6; // for convenient control

void printRollList(int *arr) {
    for (int i = 0; i < allowedRolls; i++) {
        cout << arr[i] << endl;
    }
}

int randomRoll(int dice) {
    // Keeping the random seed here results in same fucking rolls !!!!!!!
    // srand(static_cast<unsigned int>(time(0))); // random seed based on execution time
    return rand() % dice + 1; // cmon you know why you need to add 1 here
}

int main() {

/*
 * 1 . Need to count the amount of times that are required to roll a maximum result
 * 2 . Make custom dice roll as user input
 */
    int result_of_roll = 0;
    int number_of_throws = 5000;
    srand(static_cast<unsigned int>(time(0))); // random seed based on execution time

    for (number_of_throws; number_of_throws > 0; number_of_throws -= 1) {
        result_of_roll = randomRoll(requiredDice);
        cout << "You rolled d8 and result is  " << result_of_roll << endl;
    }


    return 0;
}