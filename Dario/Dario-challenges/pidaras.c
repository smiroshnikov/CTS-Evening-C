//
// Created by Sergei Miroshnikov on 25/12/2015.
//
#include <stdio.h>


void my_getLen(char []);


int main() {

    return 0;

}

void PRINT_ARRAY(int A[], int size) {
    int i = 0;

    for (i = 0; i < size; i++)
        printf("A[ %d] = %d \n", i, A[i]);
}

void evenOddArr(int A[], int size) {

    int i = 0;
    int j = size - 1;
    int temp;

    while (i < j) {
        if (A[i] % 2 == 0) {
            i++;
            continue;
        }
        if (A[j] % 2 != 0) {
            j--;
            continue;
        }
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }

}
