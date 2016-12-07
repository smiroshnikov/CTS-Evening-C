//
// Created by Iidwuurliik on 12/7/2016.
// score ver 1.0
//

#include <iostream>
using namespace std;

int main  () {
    int score1,score2,score3;
    cout << "Enter first score " << endl;
    cin >> score1;
    cout << "Enter second score " << endl;
    cin >> score2;
    cout << "Enter third score " << endl;
    cin >> score3;
    int result = (score1 + score2 + score3)/3;
    cout << "Average is ->> " << result << endl;
 // cout << "Seven divided by three is " << 7 / 3 << endl;
 // cout << "Seven divided by three is " << 7.0 / 3 << endl;
//  cout << "Seven divided by three is " << 7.0 / 3.0 << endl;



    return 0;
}