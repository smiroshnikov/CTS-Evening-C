#include <stdio.h>

#define N 6

void multiply_array(int [], int);

void maximum_within_array(int [], int);

void minimum_within_array(int [], int);

void print_array_from_large_small(int [], int);

float average_in_array(int [], int);

int main() {
    //float A[N] = {2.0f, 2.0f, 2.0f, 3.0f, 1.5f, 1.5f};
    int A[N] = {2, 2, 2, 3, 3, 6};
    int arraySize = sizeof(A) / (sizeof(int));
    for (int i = 0; i < arraySize; i++) {
        printf("%d\t", A[i]);
    }
    printf("\nLen(A) %d\n", arraySize);
    printf("Average is %.2f", average_in_array(A, arraySize));
    return 0;
}

float average_in_array(int A[], int arraySize) {
    float average;
    int sum = 0;
    for (int i = 0; i < arraySize; i++) {
        sum += A[i];
    }
    printf("Sum is %d\n", sum);
    average = sum / arraySize;
    return average;
}