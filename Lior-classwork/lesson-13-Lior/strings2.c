//
// Created by Sergei Miroshnikov on 25/12/2015.
//

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int x;
    char k[100];
    scanf("%s", s);
    x = strlen(s);//not including '\0' //compiler can implicitly convert unsigned long to int
    printf("\n%s\n", s);
    printf("\nlen of S is %d\n", x);
    strcpy(k, s);
    puts(k);


}