#include <stdio.h>

int hasSameDigits(int, int);

int main() {

    int number1, number2;
    puts("Please enter 2 numbers ");
    scanf("%d%d", &number1, &number2);

    printf("%d", hasSameDigits(number1, number2));

    return 0;
}

int hasSameDigits(int numberA, int numberB) {
    int digitCount[10] = {0};
    while (numberA) {
        digitCount[numberA % 10]++;  //increasing the cell with relevant number
        numberA /= 10;                 //removing last digit
    }
    while (numberB) {                 //same thing opposite direction
        digitCount[numberB % 10]--;
        numberB /= 10;
    }
    for (int i = 0; i < 10; ++i)
        if (digitCount[i]) return 0;
    return 1;
}