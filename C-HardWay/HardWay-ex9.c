//
// Created by Sergei Miroshnikov on 25/12/2015.
//

#include <stdio.h>

int main() {
    int numbers[4] = {0};
    char mySalaryInUSD[4] = {'1'}; // actual value {['a','\0','\0','\0']}
    printf("numbers: %d %d %d %d\n",
           numbers[0], numbers[1],
           numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n",
           mySalaryInUSD[0], mySalaryInUSD[1],
           mySalaryInUSD[2], mySalaryInUSD[3]);
    printf("name : %s\n", mySalaryInUSD);
    numbers[0] = 'a'; // accepts character to int array
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    printf("numbers: %d %d %d %d\n",
           numbers[0], numbers[1],
           numbers[2], numbers[3]);

    mySalaryInUSD[0] = '1';
    mySalaryInUSD[1] = '6';
    mySalaryInUSD[2] = '1';
    mySalaryInUSD[3] = 'K';
    puts(mySalaryInUSD);

    char *another = "Sergei"; //valid
    printf("another: %s\n", another);
    printf("another each : %c %c %c %c %c %c %c\n",
           another[0], another[1],
           another[2], another[3],
           another[4], another[5],
           another[6]);
    return 0;
}
