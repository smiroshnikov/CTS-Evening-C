//
//  swap.c
//  classwork-01
//
//  Created by Sergei Miroshnikov on 21/12/2015.
//  Copyright © 2015 Sergei Miroshnikov. All rights reserved.
//

#include <stdio.h>

void REVERSE(int [], int);

void PRINT_ARRAY(int [], int);


int main() {
    int userArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //lets swap
    int size = sizeof(userArray) / sizeof(userArray[0]);
    PRINT_ARRAY(userArray, size);
    REVERSE(userArray, size);
    PRINT_ARRAY(userArray, size);
    return 0;
}

void REVERSE(int *uArray, int sArray) {
    int temp = 0;
    int i;
    for (i = 0; i < sArray / 2; i++) {
        temp = uArray[(sArray - 1) - i];
        uArray[(sArray - 1) - i] = uArray[i];
        uArray[i] = temp;
    }
}

void PRINT_ARRAY(int userArray[], int sizeOfArray) {
    int i = 0;
    for (i = 0; i < sizeOfArray; i++)
        printf("userArray[%d] = %d \n", i, userArray[i]);
    printf("\n\n");

}