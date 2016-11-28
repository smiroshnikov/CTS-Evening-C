//
// Created by Iidwuurliik on 11/28/2016.
//

#include <iostream>

using namespace std;
int global_variable = 11; // static will live during the whole program

// there are 3 types of memory , all dependent on life time of an object
// Static - is allocated when the program starts and does not change until the end of execution
// Local is also called automatic and is also called stacked - stack memory organization - LIFO
// Dynamic


int main() {
    int a = 245;
    int *ptr;

    {
        ptr = new int(10); // this is a dynamic variable will live
        // pay attention that we can access this variable out of {} scope
        // and we need to use "delete" in order to free memory and avoid errors
    }
    cout << *ptr<< "points to ->" << ptr << endl; // here variable can be accessed !

    delete ptr;
    int h = 0 ;
    cout << "after deletion  points to address where (10) began  " << ptr << endl;
    cout << &h << endl;

    {
        int e = 3; // local variable
    } // here the variable is released , destroyed?
    //     e= 2; // not in local scope {}

    // array example

    int *ptrA;
    {
        ptrA = new int [3];
    }
    ptrA[2] = 35;
    cout << ptrA[2]<< endl;

    delete []ptrA; // correct way if releasing array from memory



    return 0;
}