#include <stdio.h>

int main() {
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'L';
    char first_name[] = "Sergei"; //here we go string
    char last_name[] = "Miroshnikov";

    printf("You are %d miles away .\n", distance);
    printf("You have %f levels of power .\n", power);
    printf("You have %f awesome super powers .\n", super_power);
    printf("Your first name is %s .\n", first_name);
    printf("Your last name is %s .\n", last_name);

    printf("My whole name is %s %c. %s. .\n", first_name,
           initial, last_name);

    typedef struct wtf {
        struct wtf *next;
    } wtf;

    return 0;
}