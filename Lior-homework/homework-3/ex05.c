//
// Created by Sergei Miroshnikov on 09/12/2015.
//


#include <stdio.h>

int main() {

    int userInput, numberOfCiphers = 0;

    printf("Please enter a number:\n");
    scanf("%d", &userInput);
    while (userInput != 0) {
        userInput = userInput / 10;
        numberOfCiphers++;
    }
    printf("%d\n", numberOfCiphers);
    return 0;
}