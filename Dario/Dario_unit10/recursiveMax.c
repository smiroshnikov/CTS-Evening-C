//
// Created by Sergei Miroshnikov on 29/02/2016.
//
int getMax(int [], int);

int getMaxArr(int A[], int, int);

#include <stdio.h>

int main() {

    int userArray[] = {10, 3, 55, 15};
    int size = sizeof(userArray) / sizeof(userArray[0]);
    printf("%d", getMax(userArray, size));
    return 0;
}


int getMax(int A[], int size) {
    return getMaxArr(A, size, 0);
}

int getMaxArr(int A[], int size, int index) {
    int max;
    if (size - 1 == index)
        return A[index];

    max = getMaxArr(A, size, index + 1);
    if (max < A[index])
        max = A[index];
    return max;
}

