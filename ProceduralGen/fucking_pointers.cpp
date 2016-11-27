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

    *p = *p+1;
    cout << "*p+1 = " << *p << endl; // shows VALUE of int at that memory slot //"разименование"
    cout << "a = " << *p << endl <<
                "Look ! 'a' value has also changed !"
                    << endl; // shows VALUE of int at that memory slot





    return 0;
}