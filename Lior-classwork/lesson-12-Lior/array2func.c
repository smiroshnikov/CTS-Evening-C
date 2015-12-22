#include <stdio.h>

#define N 5

void getArr(int [], int);

void printArr(int [], int);


int main() {
    int a[N] = {1, 2, 3, 4, 5};
    getArr(a, N);
    printArr(a, N);
    return 0;

}

void getArr(int b[], int size) {
    int i;
    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);
}

void printArr(int b[], int size) {
    int i;
    for (i = 0; i < N; i++)
        printf("%d\t\n", b[i]);
}