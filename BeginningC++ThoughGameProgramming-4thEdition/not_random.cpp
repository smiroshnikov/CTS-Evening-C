//
// Created by Iidwuurliik on 11/22/2016.
//

#include <iostream>
#include <cstdlib> //in VS probably added subtlely, scuko!

using namespace std;
int main (){
    while (true){
        cout << "Press enter to generate a random number:";
        cin.get();

        int randomInteger = rand();
        cout << randomInteger << endl << endl;
    }
    return 0;
}