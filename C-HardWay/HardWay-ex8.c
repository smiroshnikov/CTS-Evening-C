//
// Created by Sergei Miroshnikov on 12/23/2015.
//

#include <stdio.h>


int main(int argc, char *argv[]) {
    int areas[] = {10, 12, 13, 14, 20};

    char name[] = "Sergei";
    char full_name[] = {'S', 'e', 'r', 'g', 'e', 'i', ' ',
                        'M', 'i', 'r', 'o', 's', 'h', 'n', 'i', 'k', 'o', 'v', '\0'};


    printf("The size of int is %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    printf("The first area is %d , the second area is %d.\n",
           areas[0], areas[1]);
    printf("The size of char is %ld\n", sizeof(char));
    printf("The size of 'name'(char[]):%ld\n", sizeof(name));
    printf("len('name')= %ld\n", sizeof(name) / sizeof(char));
    printf("len('full_name')= %ld\n", sizeof(full_name) / sizeof(char));
    printf("name = \" %s\" and full_name= \"%s\"\n", name, full_name);
    return 0;
}