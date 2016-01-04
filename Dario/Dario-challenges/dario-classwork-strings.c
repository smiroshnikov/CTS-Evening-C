#include <stdio.h>
#include <string.h>

int my_strLen(char []);

void my_strCat(char [], char []);

void my_strCpy(char [], char []);

// need to build our own str function from below

int main() {

    char s1[20] = "12345";
    char s2[10] = "abcdef";

    printf("strlen (s1) = %ld\n", strlen(s1));
    printf("strcmp (s1,s2) = %d\n\n", strcmp(s1, s2));
    printf("strcat (s1,s2) = %s\n\n", strcat(s1, s2));
    printf("strcpy (s1,s2) = %s\n\n", strcpy(s1, s2));


    //   printf("strcpy (s1,s2) = %s\n\n", strcpy(s1, s2));

    printf("my_len [%d] \n", my_strLen(s1));
    my_strCat(s1, s2);
    puts(s1);
    my_strCpy(s1, s2);
    puts(s1);


    return 0;

}

int my_strLen(char STR[]) {
    int len = 0;
    while (STR[len] != '\0') {
        len++;
    }
    return len;
}

void my_strCat(char A[], char B[]) {
    int i = 0;
    int j = my_strLen(A); // was inside loop , had a race condition!

    for (i = 0; i < my_strLen(A); i++) {
        A[j + i] = B[i];
    }

}

void my_strCpy(char A[], char B[]) {//s2->s1 s2>s1
    int i = 0;

    for (i = 0; i < my_strLen(B); i++) {
        A[i] = B[i];
    }
    A[i] = '\0';


}