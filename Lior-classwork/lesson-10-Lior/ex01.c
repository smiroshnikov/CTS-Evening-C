#include <stdio.h>

// we went through asciitable.com, adviced to print that out and have with us on test (open material )
// '0' - 48
// '1' - 49 
// '2' - 50
// '9' - 57
// 'A' - 65	'a' - 97
// 'B' - 66	'b' - 98
// 'Z' - 90	'z' - 122

// difference between small and capital characters are 32
//

int main() {
    char ch1 = 97;
    char ch2 = 'a';
    int i;
    printf("\n%c", ch1);
    printf("\n%c\n", ch2);
    for (i = 0; i < 256; i++) {
        printf("%d:.%c\t", i, i);
    }
    printf("**********************\n");
    char ch03 = 304;
    printf("'304' = %c", ch03);
    ch03 = 1601;
    printf("1601 = %c", ch03);


}

