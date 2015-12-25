//
// Created by Sergei Miroshnikov on 25/12/2015.
//

//
//  main.c
//  friday-classwork-01
//
//  Created by Sergei Miroshnikov on 25/12/2015.
//  Copyright © 2015 Sergei Miroshnikov. All rights reserved.
//

#include <stdio.h>

int main() {

    char st[5] = "Hello";
    int size_of_string = sizeof(st) / sizeof(char); // Lior suggested to avoid that kindn of size calculation
    // I can always use sizeof(st)/sizeof(st[0]), hence array will ALWAYS have first [0] element when defined
    printf("I have a string ='%s' and it's length is %d\n", st, size_of_string);
    char s[4] = {'1', 'a', 'b', '\0'}; // if defined not in short way string should include NULL byte character
    printf("%s\n", s);

    char my_string[6];
    int i;
    for (i = 0; i < 6; i++) {
        my_string[i] = 'a' + i;
        printf("%c", my_string[i]);
    }
    my_string[5] = '\0';
    printf("\n%s\n", my_string);

    // receiving user based string
/*
    for (i=0; i<6; i++) {
    }*/
    // str [i] = '\0'; // not required when using '\0'
    char str[6];
    //   scanf("%s",str);
//    printf("Your input was %s\n",str);
    gets(str);
    puts(str);

    return 0;
}
