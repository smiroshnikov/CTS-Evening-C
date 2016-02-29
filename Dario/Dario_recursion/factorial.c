#include <stdio.h>

unsigned long factorial(int);

int main() {
    int A = 20;
    printf("Factorial of %d is %ld\n", A, factorial(A));
    return 0;
}

unsigned long factorial(int A) {
    if (A < 2) return 1;
    return A * factorial(A - 1);
}
