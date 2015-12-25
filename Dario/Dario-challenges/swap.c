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

void EVEN_ODD(int [], int);


int main() {
    int userArray[] = {1, 3, 32, 32, 54};
    int size = sizeof(userArray) / sizeof(userArray[0]);
    PRINT_ARRAY(userArray, size);
    puts("===================");
    REVERSE(userArray, size);
    PRINT_ARRAY(userArray, size);
    // EVEN_ODD(userArray, size);
    // PRINT_ARRAY(userArray, size);
    return 0;
}

void REVERSE(int *uArray, int sArray) {
    int temp = 0;
    int i;
    /* here lies a catch, without dividing by two i was over-replacing */

    for (i = 0; i < sArray / 2; i++) {
        temp = uArray[(sArray - 1) - i];
        uArray[(sArray - 1) - i] = uArray[i];
        uArray[i] = temp;
    }
}

void PRINT_ARRAY(int userArray[], int sizeOfArray) {
    int i = 0;

    for (i = 0; i < sizeOfArray; i++)
        printf("userArray[ %d] = %d \n", i, userArray[i]);
}

/* please create separate counters that will track location of
  ODD and EVEN members of the array  */
void EVEN_ODD(int userArray[], int sizeOfArray) {
    int i;
    int temp;
    for (i = 0; i < sizeOfArray; i++) {
        if (userArray[i] % 2 == 0) {

            // code here to place EVEN part first
            printf("Keep at same index %d\n", userArray[i]);
        }

        else {
            //code here place ODD part
            printf("Move to back %d\n", userArray[i]);
            temp = userArray[i];
            userArray[i] = userArray[sizeOfArray - i] - 1;
            userArray[sizeOfArray - i - 1] = temp;

            // and what if replaced value is also odd ?
            //what if odd array ?

        }
    }
}