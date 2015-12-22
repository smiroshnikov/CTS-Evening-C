//
// Created by Sergei Miroshnikov on 09/12/2015.
//


#include <stdio.h>

int main() {
    int firstNum, secondNum, temporaryNumber;
    int o;
    printf("\nPlease enter first number >");
    scanf("%d", &firstNum);
    printf("\nPlease enter second number >");
    scanf("%d", &secondNum);

    if (firstNum > secondNum) {
        temporaryNumber = secondNum;
        secondNum = firstNum;
        firstNum = temporaryNumber;
    }

    for (o = firstNum; o < secondNum; o++) {
        printf("%d\t\n", o);
    }
    return 0;
}