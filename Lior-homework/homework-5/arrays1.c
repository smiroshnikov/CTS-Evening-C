#include <stdio.h>

#define N 6

long multiply_array(int [], int);

int maximum_within_array(int [], int);

int minimum_within_array(int [], int);

void print_array_from_smallest_to_largest(int [], int);

float average_of_array(int [], int);

int divide_by_first_element(int[], int);

void transform_array_in_freaky_way(int [], int);

/* add doc strings to every function */

int main() {

    int A[N] = {-100, 20, 30, 40967542, 15, -20};
    int arraySize = sizeof(A) / (sizeof(int));
    printf("Multiplication of all array elements = %ld\n", multiply_array(A, arraySize));
    printf("Average is %.2f\n", average_of_array(A, arraySize));
    printf("Maximum in array is %d\n", maximum_within_array(A, arraySize));
    printf("Minimal element in array is %d\n", minimum_within_array(A, arraySize));
    print_array_from_smallest_to_largest(A, arraySize);
    printf("%d\n", divide_by_first_element(A, arraySize));
    transform_array_in_freaky_way(A, arraySize);
    return 0;
}

float average_of_array(int *A, int arraySize) {
    int i;
    float average;
    float sum = 0;
    for (i = 0; i < arraySize; i++) {
        sum += A[i];
    }
    average = sum / arraySize;
    return average;
}

long multiply_array(int A[], int arraySize) {
    int i;
    long multiplication = 1;
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

void print_array_from_smallest_to_largest(int A[], int arraySize) {
    int i;
    int smallest_element = minimum_within_array(A, arraySize);
    int largest_element = maximum_within_array(A, arraySize);
    int smallest_element_position = 0;
    int largest_element_position = 0;
    for (i = 0; i < arraySize; i++) {
        if (A[i] == largest_element) {
            largest_element_position = i;
        }
        if (A[i] == smallest_element) {
            smallest_element_position = i;
        }
    }
    if (smallest_element_position < largest_element_position) {
        for (i = smallest_element_position; i <= largest_element_position; i++)
            printf("%d\t", A[i]);
    }
    if (smallest_element_position > largest_element_position) {
        for (i = smallest_element_position; i >= largest_element_position; i--)
            printf("%d\t", A[i]);
    }
    else if (smallest_element_position == largest_element_position) printf("%d", A[smallest_element_position]);
    printf("\n");
}

int divide_by_first_element(int A[], int arraySize) {
    int sumOfElements = (int) (average_of_array(A, arraySize) * arraySize);
    return sumOfElements % A[0] == 0 ? 1 : 0;
}

void transform_array_in_freaky_way(int A[], int arraySize) {
    int odd_elements_counter = 0;
    int i = 0;
    int sumOfElements = (int) (average_of_array(A, arraySize) * arraySize);
    int sum_of_first_last = A[0] + A[arraySize - 1];
    for (i = 0; i < arraySize; i++) {
        if (A[i] % 2 != 0)odd_elements_counter += 1;
    }
    A[0] = odd_elements_counter;
    A[1] = sumOfElements;
    A[2] = sum_of_first_last;
}


