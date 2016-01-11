//
// Created by Sergei Miroshnikov on 08/01/2016.
//
#include <stdio.h>

int ifPretty(int A, int B);

int main() {
    int EXIT_FLAG = 0;
    int num1, num2;
    while (EXIT_FLAG != 1) {
        puts("Enter 2 numberz, separate by enter ");
        scanf("%d %d", &num1, &num2);

        if (num1 == -1 && num2 == -1) {
            puts("FUCK!");
            break;
        }
        else {
            printf("%d", ifPretty(num1, num2));
        }
    }
    return 1;
}

int ifPretty(int A, int B) {
    int i = 1;
    int digitA;
    int digitB;
    int result = 1;
    int sum;
    while (A != 0) {
        digitA = A % 10;
        digitB = B % 10;
        A /= 10;
        B /= 10;
        if (digitB * 2 != digitA) {
            result = 0;
            break;
        }
        sum = digitA + digitB;
        if (i % 2 == 0) {
            if (sum * 2 != (A % 10 + B % 10)) {
                result = 0;
                break;
            }
        }
        if (i % 2 != 0) {
            if (sum != (A % 10 + B % 10) * 2) {
                result = 0;
                break;
            }
        }

    }
    return result;
}

