//
// Created by miross1 on 11/22/2016.
//

#include <stdio.h>
#include <string.h>

int main() {
    int whole_number;
    int *wh_n;
    char str[58];
    float hopefully_rational;
    char character_value;
    long long long_whole_number;
    double long_hopefully_rational;
    int length;

    typedef struct {
        int age;
        char pet_name[5];
        char color[10];
    } Cat;


    Cat Mutsi;
    Mutsi.age = 12;
    printf("Cats age = %d \n",Mutsi.age);


    length = sizeof(whole_number);
    printf("размер int: %d\n", length);
    length = sizeof(hopefully_rational);
    printf("размер float: %d\n", length);
    length = sizeof(character_value);
    printf("размер char: %d\n", length);
    length = sizeof(long_hopefully_rational);
    printf("размер double: %d\n", length);
    length = sizeof(long_whole_number);
    printf("размер long: %d\n", length);
    printf("pointer looks like %d \n",wh_n);
    length = sizeof(str);
    printf("string length is %d",length);



}