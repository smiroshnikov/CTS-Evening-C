#include <stdio.h>

#define N 6

void multiply_array(int [], int);

void maximum_within_array(int [], int);

void minimum_within_array(int [], int);

void print_array_from_large_small(int [], int);

float average_in_array(int [], int);

int main() {
    //float A[N] = {2.0f, 2.0f, 2.0f, 3.0f, 1.5f, 1.5f};
    int A[N] = {0, 0, 0, 0, 0, 13};
    int arraySize = sizeof(A) / (sizeof(int));
    for (int i = 0; i < arraySize; i++) {
        printf("[%d]", A[i]);
    }
    printf("\nLen(A) %d\n", arraySize);
    printf("Average is %.2f", average_in_array(A, arraySize));
    return 0;
}

float average_in_array(int A[], int arraySize) {
    float average;
    float sum = 0;
    for (int i = 0; i < arraySize; i++) {
        sum += A[i];
    }
    printf("Sum is %.0f\n", sum);
    average = sum / arraySize;
    return average;
}