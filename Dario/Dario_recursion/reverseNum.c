// the whole point of using recursion - it is faster

#include <stdio.h>

void reverseNum(int num);

int main() {
    reverseNum(1234);

    return 0;
}

void reverseNum(int num) {
    if (num < 10) printf("%d", num);
    else {
        printf("%d", num % 10);
        reverseNum(num / 10);
    }
}