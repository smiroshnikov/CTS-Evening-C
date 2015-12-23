//
// Created by Sergei Miroshnikov on 12/23/2015.
//

#include <stdio.h>

void looping_over_the_universe(unsigned long);

int main(int argc, char *argv[]) {
    int maxArr[] = {1, 2, 3, 4};

    int bugs = 100;
    double bug_rate = 1.2;
    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);
    unsigned long universe_of_defects = 1L * 1024L * 1024L * 1024L * 100000L;
    printf("The entire universe has %ld bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %.2f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("Thats only a %e portion of the universe.\n", part_of_universe);

    // experiment
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("Which means you should care %d%%. \n", care_percentage);
    printf("Lets break ! %d", nul_byte);
    printf("Please dont forget to BREAK !!!");
    looping_over_the_universe(universe_of_defects);
    return 0;
}

void looping_over_the_universe(unsigned long universeSize) {
    unsigned long i;
    for (i = 0; i < universeSize; i++)
        printf("counterOfDoom  > %ld \n", i * i * i * i);
}