//
//  hw-2.c
//  classwork-01
//
//  Created by Sergei Miroshnikov on 14/12/2015.
//  Copyright © 2015 Sergei Miroshnikov. All rights reserved.
//

#include <stdio.h>


void showMenu();

int myPersonalMaximum(int, int);

int lower2Upper(char);

int ifLiteral(char);

int gimmeMinimum(int, int, int);

int sumMSDLSD(int);

int numberOfDigits(int);

float myDivision(int, int);

int smallestLargest(int, int, int);

int absoluteValue(int);

int invertNumber(int);

int ifPrime(int);

int getDivisorsSimple(int);

int num1, num2, num3;
int EXIT_FLAG = 0;

int main() {
    int user_choice;
    char letter;

    while (EXIT_FLAG != 1) {
        showMenu();
        scanf("%d", &user_choice);
        switch (user_choice) {
            case 1:
                puts("\nPlease enter the first number >");
                scanf("%d", &num1);
                puts("\nPlease enter the second number >");
                scanf("%d", &num2);
                printf("The maximum is %d \n", myPersonalMaximum(num1, num2));
                break;

            case 2:
                printf("\nEnter a lowercase letter, no input validation was required... >");
                scanf(" %c", &letter); //a work-around for missing  flushall() in Unix
                printf("\nHere is your capital letter -> %c\n", lower2Upper(letter));
                break;

            case 3:
                puts("Please provide a letter either lowercase or capital");
                scanf(" %c", &letter);
                printf("result : %d\n", ifLiteral(letter));
                break;

            case 4:
                puts("\nPlease enter the first number >");
                scanf("%d", &num1);
                puts("\nPlease enter the second number >");
                scanf("%d", &num2);
                puts("\nPlease enter the third number >");
                scanf("%d", &num3);
                printf("\nSmallest number is %d\n", gimmeMinimum(num1, num2, num3));
                break;

            case 5:
                puts("Enter a whole number >\n ");
                scanf("%d", &num1);
                printf("MSD+LSD = %d\n", (sumMSDLSD(num1)));
                break;

            case 6:
                puts("Enter a whole number >\n ");
                scanf("%d", &num1);
                printf("Number of digits in this number is %d\n", numberOfDigits(num1));
                break;

            case 7:
                puts("\nPlease enter the first number >");
                scanf("%d", &num1);
                puts("\nPlease enter the second number >");
                scanf("%d", &num2);
                printf("Here is division result %f\n", myDivision(num1, num2));
                break;

            case 8:
                puts("\nPlease enter the first number >");
                scanf("%d", &num1);
                puts("\nPlease enter the second number >");
                scanf("%d", &num2);
                puts("\nPlease enter the third number >");
                scanf("%d", &num3);
                printf("Here is the sum of smallest and largest numbers %d\n", smallestLargest(num1, num2, num3));
                break;
            case 9:
                puts("Please enter either positive or negative integer");
                scanf("%d", &num1);
                printf("Absolute value of %d is %d\n", num1, absoluteValue(num1));
                break;

            case 10:
                puts("Please enter a number you would like to invert");
                scanf("%d", &num1);
                printf("Here is your inverted number : %d", invertNumber(num1));
                break;
            case 11:
                puts("Please enter a number to see if prime ");
                scanf("%d", &num1);
                printf("%d", ifPrime(num1));
                break;
            case 12:
                puts("Please enter an integer number ");
                scanf("%d", &num1);
                printf("Sum of divisors is %d\n", getDivisorsSimple(num1));
                break;
            case 13:
                puts("\nBye Bye");
                EXIT_FLAG = 1;
                break;

            default:
                puts("invalid input !");

        }
    }
    return 0;
}


void showMenu() {
    puts("***********Behold!, my magnificent menu !***********");
    puts("1. Maximum of two numbers ");
    puts("2. Lowercase to uppercase conversion ");
    puts("3. If character is a letter ");
    puts("4. Minimum of 3 numbers ");
    puts("5. MSD + LSD calculation ");
    puts("6. Number of digits ");
    puts("7. Division of two whole numbers ");
    puts("8. Smallest number + largest number ");
    puts("9. Absolute value ");
    puts("10. Inverted number ");
    puts("11. Check if the number is prime ");
    puts("12. Get the sum of divisors ");
    puts("13. EXIT!");
}

int myPersonalMaximum(int num1, int num2) {


    if (num1 > num2)return num1;
    else if (num2 > num1)return num2;
    else
        return num1;
}

int lower2Upper(char letter) {
    return letter - 32;
}

int ifLiteral(char letter) {
    return (letter > 65 & letter < 90) || (letter > 97 && letter < 122) ? 1 : 0;
}

int gimmeMinimum(int A, int B, int C) {
    int minimum;
    minimum = A;
    if (B < minimum)
        minimum = B;
    if (C < minimum)
        minimum = C;
    return minimum;
}

int sumMSDLSD(int A) {
    int MSD = 0;
    int LSD = 0;
    LSD = A % 10;

    while (A / 10 != 0) {
        A /= 10;
        MSD = A;
    }
    return MSD + LSD;
}

int numberOfDigits(int A) {
    int digitCounter = 1;

    while (A / 10 != 0) {

        digitCounter += 1;
        A /= 10;
    }
    return digitCounter;
}

float myDivision(int A, int B) {
    float result;
    result = (float) (A) / (float) (B);
    return result;
}

int smallestLargest(int A, int B, int C) {
// no validation was required in case all numbers are even
    int localMaximum;
    int minimum = gimmeMinimum(A, B, C);
    localMaximum = myPersonalMaximum(A, B);
    localMaximum = myPersonalMaximum(localMaximum, C);


    return minimum + localMaximum;

}

int absoluteValue(int A) {
    if (A < 0)
        return (-1) * A;
    else return A;
}

int invertNumber(int A) {
    return (-1) * A;
}

int ifPrime(int A) {
    int i;
    int fuckingCIsAnOldLanguageWithIdioticLimitationsFlag = 0;
    for (i = 2; i <= A / 2; i++) {
        if (A % i == 0) {
            fuckingCIsAnOldLanguageWithIdioticLimitationsFlag = 0;
            break;
        }
        else fuckingCIsAnOldLanguageWithIdioticLimitationsFlag = 1;
    }
    if ((fuckingCIsAnOldLanguageWithIdioticLimitationsFlag == 1) || (A == 2) || (A == 3))return 1;
    else return 0;

}

int getDivisorsSimple(int A) {
    int i;
    int sum = 0;
    for (i = 1; i <= A; i++)
        if (A % i == 0)
            printf("divisor is %d \n", i);
    sum = sum + i;
    return sum;
}