//
// Created by Sergei Miroshnikov on 09/12/2015.
//
// ex #1 opposite number

#include <stdio.h>

int main() {

    int input, stop_flag = 0;

    while (stop_flag != 1) {
        printf("Please provide positive number:\n ");
        scanf("%d", &input);
        if (input <= 0) {
            printf("Invalid input , NOT positive\n");
        }
        else {
            printf(" Opposite number is [%d]", input * (-1));
            stop_flag = 1;
        }


    }
    return 0;
}