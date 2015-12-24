#include <stdio.h>

#define N 6

int multiply_array(int [], int);

int maximum_within_array(int [], int);

int minimum_within_array(int [], int);

void print_array_from_large_small(int [], int);

float average_in_array(int [], int);

int main() {
    //float A[N] = {2.0f, 2.0f, 2.0f, 3.0f, 1.5f, 1.5f};
    int A[N] = {16, 20, 3, 4, -12, -600};
    int arraySize = sizeof(A) / (sizeof(int));
    printf("Multiplication of all array elements = %d\n", multiply_array(A, arraySize));
    printf("Average is %.2f\n", average_in_array(A, arraySize));
    printf("Maximum in array is %d\n", maximum_within_array(A, arraySize));
    printf("Minimal element in array is %d\n", minimum_within_array(A, arraySize));
    return 0;
}

float average_in_array(int A[], int arraySize) {
    int i;
    float average;
    float sum = 0;
    for (i = 0; i < arraySize; i++) {
        sum += A[i];
    }
    average = sum / arraySize;
    return average;
}

int multiply_array(int A[], int arraySize) {
    int i;
    int multiplication = 1;
    for (i = 0; i < arraySize; i++) {
        multiplication *= A[i];
    }
    return multiplication;
}

int maximum_within_array(int A[], int arraySize) {
    int i;
    int max = 0;
    for (i = 0; i < arraySize; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }
    return max;
}

int minimum_within_array(int A[], int arraySize) {
    int i;
    int min = A[0];
    for (i = 0; i < arraySize; i++) {
        if (A[i] < min) {
            min = A[i];
        }
    }
    return min;
}