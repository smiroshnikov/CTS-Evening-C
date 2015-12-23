//
// Created by Sergei Miroshnikov on 12/23/2015.
//
#include <stdio.h>

#define SIZE 3

int main() {
    int grade_list[SIZE] = {1, 2, 3};
    int i;
    int arrSize = sizeof(grade_list) / sizeof(grade_list[0]);
    printf("array contains %d\n", arrSize);
//    printf("%\n", sizeof(grade_list)); //I cannot print sizeof because it is in bytes

    for (i = 0; i < SIZE; i++) {
        printf("%d\n", grade_list[i]);


    }
    return 0;

}
