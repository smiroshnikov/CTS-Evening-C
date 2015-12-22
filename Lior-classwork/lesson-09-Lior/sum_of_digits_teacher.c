#include <stdio.h>

int countEvenDigits(int number);

int isDiv3(int number);

int isCountEvenDigitsDiv3(int number);

int isCountEvenDigitsDiv3(int number) {
    int count;
    count = countEvenDigits(number);
    if (count == 0) return 0;
    else return isDiv3(count);
}

int isDiv3(int number) {
    return number % 3 == 0 ? 1 : 0; //this is cool if in return statement!
}

int countEvenDigits(int number) {
    int digit, count = 0;
    while (number != 0) {
        digit = number % 10;
        if (digit % 2 == 0)
            count++;
        number /= 10;
    }
    return count;
}

int Mmain() {
    printf("result %d", isCountEvenDigitsDiv3(246));
    return 0;
}