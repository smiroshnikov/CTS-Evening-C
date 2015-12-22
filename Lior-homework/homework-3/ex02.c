//
// Created by Sergei Miroshnikov on 09/12/2015.
//

/*
Print all odd numbers from 0 until input value
*/

#include <stdio.h>

int main() {
    int input, i;
    while (1) {
        printf("\nEnter a positive number : ");
        scanf("%d", &input);
        for (i = 0; i <= input; i++) {
            if (i % 2 == 0) {
                printf("%d\n", i);
            }
        }
        return 0;

    }
}
