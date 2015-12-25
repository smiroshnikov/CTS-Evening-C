//
// Created by Sergei Miroshnikov on 25/12/2015.
//
#include <stdio.h>

void PRINT_ARRAY(int [], int);

void EVEN_ODD(int [], int);


int main() {
    int userArray[] = {5, 4, 4, 6, 8};
    int size = sizeof(userArray) / sizeof(userArray[0]);
    PRINT_ARRAY(userArray, size);
    EVEN_ODD(userArray, size);
    PRINT_ARRAY(userArray, size);
    return 0;
}


void PRINT_ARRAY(int userArray[], int sizeOfArray) {
    int i = 0;

    for (i = 0; i < sizeOfArray; i++)
        printf("userArray[ %d] = %d \n", i, userArray[i]);
}



// works in simple case {ODD,EVEN,EVEN,EVEN,EVEN}
// have problem with 2 ODDS

void EVEN_ODD(int userArray[], int sizeOfArray) {
    int i;
    int temp;
    int even_position = 0;
    int odd_position = 0;
    // position trackers
    for (i = 0; i < sizeOfArray; i++) {
        if (userArray[i] % 2 == 0) {
            // STORE position
            even_position = i;
            //   printf("EVEN %d @ [%d] position \n", userArray[i], i);
        }
        else {
            // STORE position
            odd_position = i;
            //    printf("ODD %d @ [%d] position \n", userArray[i], i);
        }
    }
    // lets replace KEEP EVEN MOVE ODD
    // no decision here just flat bullshit
    for (i = 0; i < sizeOfArray; i++) {
        if (userArray[i] % 2 != 0) {
            temp = userArray[odd_position];
            userArray[odd_position] = userArray[even_position];
            userArray[even_position] = temp;
        }
    }
}