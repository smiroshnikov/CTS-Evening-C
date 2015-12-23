//
// Created by Sergei Miroshnikov on 12/23/2015.
//
#include <stdio.h>

#define SIZE 3

int main() {
    int grade_list[SIZE] = {};
    int i;
//    int arrSize = sizeof(grade_list)/(grade_list[0]);
//    printf("array contains %d",arrSize);
//    printf("%d", sizeof(grade_list));

    for (i = 0; i < SIZE; i++) {
        printf("%d\n", grade_list[i]);


    }
    return 0;

}
