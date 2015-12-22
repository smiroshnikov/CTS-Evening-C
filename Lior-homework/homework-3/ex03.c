//
// Created by Sergei Miroshnikov on 09/12/2015.
//


#include <stdio.h>

int main() {
    int month, dayCounter = 0;
    int jan = 31, feb = 28, mar = 31, apr = 30, may = 31, jun = 30, jul = 31, aug = 31, sep = 30, oct = 31, nov = 30, dec = 31;

    printf("Please enter the number of month:\n");
    scanf("%d", &month);

    switch (month) {
        case 1:
            dayCounter += jan;
            printf("Number of days from January to January this:%d\n", dayCounter);
            break;

        case 2:
            dayCounter = dayCounter + jan + feb;
            printf("Number of days from January to February this:%d\n", dayCounter);
            break;

        case 3:
            dayCounter = dayCounter + jan + feb + mar;
            printf("Number of days from January to Marth this:%d\n", dayCounter);
            break;

        case 4:
            dayCounter = dayCounter + jan + feb + mar + apr;
            printf("%d - Days passed since the beginning of the year\n", dayCounter);
            break;

        case 5:
            dayCounter = dayCounter + jan + feb + mar + apr + may;
            printf("%d - Days passed since the beginning of the year\n", dayCounter);
            break;

        case 6:
            dayCounter = dayCounter + jan + feb + mar + apr + may + jun;
            printf("%d - Days passed since the beginning of the year\n", dayCounter);
            break;

        case 7:
            dayCounter = dayCounter + jan + feb + mar + apr + may + jun + jul;
            printf("%d - Days passed since the beginning of the year\n", dayCounter);
            break;

        case 8:
            dayCounter = dayCounter + jan + feb + mar + apr + may + jun + jul + aug;
            printf("%d - Days passed since the beginning of the year\n", dayCounter);
            break;

        case 9:
            dayCounter = dayCounter + jan + feb + mar + apr + may + jun + jul + aug + sep;
            printf("%d - Days passed since the beginning of the year\n", dayCounter);
            break;

        case 10:
            dayCounter = dayCounter + jan + feb + mar + apr + may + jun + jul + aug + sep + oct;
            printf("%d - Days passed since the beginning of the year\n", dayCounter);
            break;

        case 11:
            dayCounter = dayCounter + jan + feb + mar + apr + may + jun + jul + aug + sep + oct + nov;
            printf("%d - Days passed since the beginning of the year\n", dayCounter);
            break;

        case 12:
            dayCounter = dayCounter + jan + feb + mar + apr + may + jun + jul + aug + sep + oct + nov + dec;
            printf("%d - Days passed since the beginning of the year\n", dayCounter);
            break;

        default:
            printf("Invalid input , enter a month number (1-12) ");
    }
    return 0;

}
