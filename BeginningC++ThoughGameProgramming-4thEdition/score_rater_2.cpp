//
// Created by Iidwuurliik on 12/7/2016.
//

#include <iostream>

using namespace std;


int main() {

    int score;
    char again = 'y';

    while (again == 'y') {
        cout << "Enter the score !" << endl;
        cin >> score;
        while (score) {
            cout << "score is decreasing " << score << endl;
            score--;
        }
        cout << "Do you want to play again ? " ;
        cin >> again;
    }
    cout << "OK bye ! " << endl;
    return 0;
}




