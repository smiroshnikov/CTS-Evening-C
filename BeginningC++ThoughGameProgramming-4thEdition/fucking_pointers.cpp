/*
 * following https://www.youtube.com/watch?v=goYuEJumeOA
 * */

#include <iostream>

using namespace std;

int main() {
//    setlocale(LC_CTYPE, "rus"); // didn't work on W7
    int a = 5;
    int *p = &a; //points to integer

    cout << "&a = " << &a << endl; // prints address in memory
    cout << "p = " << p << endl; // prints address in memory

    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl; // shows VALUE of int at that memory slot //"разименование"

    // we can take this further

    *p = *p + 1;
    cout << "*p+1 = " << *p << endl; // shows VALUE of int at that memory slot //"разименование"
    cout << "a = " << *p << endl <<
         "Look ! 'a' value has also changed !"
         << endl; // shows VALUE of int at that memory slot

    int b = 30242040; //‭[00000001][11001101][01110100][11111000]‬ - 4 bytes
    int *bP = &b; // 0x61ff10
    char c = 'D';
    char *cC = &c;

    cout << "This is big int " << *bP << " and it takes " << sizeof(b) << " bytes of memory" << endl;
    cout << "Its address is " << bP << endl;
    cout << "this is  " << c << endl;
    cout << "Its address is " << int(cC) << endl; // Ask Michael why the fuck do I need to cast ?!

    cout << "int = " << sizeof(int) << endl;
    cout << "char = " << sizeof(char) << endl;
    cout << "double = " << sizeof(double) << endl;
    cout << "float = " << sizeof(float) << endl;
    cout << "short = " << sizeof(short) << endl;
    cout << "long = " << sizeof(long long) << endl; // Why long needs to be declared twice?!

    float arr[2][2] = {1.01, 1.02, 2.01, 2.02};

    for (int i = 0; i <= 1; ++i) {
        for (int j = 0; j <= 1; ++j) {
            cout << "item  " << "(" << arr[i][j] << ") is located @ " << &arr[i][j] << endl;;
        }
    } //end for
    /*
     * Not lets see some normal or at least reasonable usage of this stuff
     * Lets see how I can iterate over values in array
     * */
    cout << "=======================USAGE===================== "<< endl;
    int d[3] = {21,15,257};
    int *pD = &d[0];
    cout << "out list is ->";
    for (int k = 0; k < 3; ++k) {
        cout <<  d[k] << ",";
    }

    cout << endl << "&d[0] = " << &d[0] << endl;
    cout << "pD =  " << pD << endl;
    cout << "pD = "<< *pD << " Before incrementing pointer "  << endl;
    pD++;
    cout << "pD++ = "<< pD << " !Pay attention address increased by 4 bytes!"  << endl;
    //разименовываем указатель - убей меня по Русски
    cout << "*pD now has new value = " << *pD << " and thats value we have in d[1]" <<  endl;
    cout << "That's how we can iterate over values in array with pointers ! " << endl;



    return 0;
}