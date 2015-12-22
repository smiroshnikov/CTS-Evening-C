//
//  seker.c
//  classwork-01
//
//  Created by Sergei Miroshnikov on 21/12/2015.
//  Copyright © 2015 Sergei Miroshnikov. All rights reserved.
//

#include <stdio.h>

// just go over the fucking presentation #6 , the lesson was a mess up .

void print_array(int arr[], int size);

void printHistogram(int *score, int size);

int main() {
    int myArr[] = {1, 3, 6, 4, 7, 8, 3, 9, 8, 7, 6, 5, 5, 4, 3, 6, 7, 6, 5, 4, 3, 7, 3,
                   1, 2, 3, 6, 5, 4, 5, 6, 7, 4, 8, 1, 6, 7, 8, 9, 5, 3, 3, 2, 0, 5, 6, 7, 1};
            // int small_arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 3};
            int size = sizeof(myArr)/sizeof(myArr[0]);
            int size = sizeof(small_arr) / sizeof(small_arr[0]);
            int i;

            int score[10] = { 0 };

            print_array(small_arr, size);

            for (i = 0; i < size; i++) {
                score[myArr[i]]++;
                // score[small_arr[i]]++;
            }
            puts("The Scores are:");
            print_array(score, 10);
            printHistogramm(score, 10);
            return 0;
    }

    void print_array(int arr[], int size) {
        int i = 0;
        for (i = 0; i < size; i++) {
            printf("arr[%d] = %d\n", i, arr[i]);
        }
        printf("\n\n");
    }

    void printHistogramm(int score[], int size) {
        int i, j;
        for (i = 0; i < size; i++) {
            printf("%d: ", i);
            for (j = 0; j < score[i]; j++)
                printf("*");
            printf("\n");
        }
    }