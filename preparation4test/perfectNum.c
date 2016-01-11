#include <stdio.h>

int main() {
    int dec = 1, i;
    int num;
    int desired_number;
    num = 12345;
    int digit = 1;
    int digitSum = 0;
/*
    for (int i = 0; i < digit; i++) {
        dec *= 10;
    }
    desired_number = num / dec;
    printf("%d\n", desired_number);
*/
    while (desired_number != 0) {
        digitSum = digitSum + desired_number % 10;
        desired_number %= 10;
        printf("sum %d  number %d", digitSum, desired_number);
    }
/*
    while (desired_number != 0) {
        digitSum = digitSum + desired_number % 10;
        desired_number /= 10;
        printf("%d\n", desired_number);
    }
    printf("digit sum  - %d\n", digitSum);
*/    return 0;
}

