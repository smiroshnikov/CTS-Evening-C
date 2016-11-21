#include <stdio.h>

unsigned long fibonacci(int);

int main() {
    int A = 20;
    printf("Fibonacci of A %d is %ld", A, fibonacci(A));
    return 0;
}

unsigned long fibonacci(int A) {
    if (A <= 2)
        return 1;
    return (fibonacci(A - 1) + fibonacci(A - 2));


}