#include <string.h>
#include <stdio.h>

void isNaughtyStr(char str[]);

int main() {
    char text[] = "axaxax";

    isNaughtyStr(text);
    return 0;
}

void isNaughtyStr(char text[]) {


    int i = 0;
/*
    int i2 = strlen(text) / 3;
    int i3 = (strlen(text) / 3) * 2;
    for (i = 0; i < strlen(text) / 3; i++, i2++, i3++) {
        if (text[i] != text[i2] || text[i] != text[i3]) {
*/
    for (i = 0; i < strlen(text) / 3; i++) {
        if (text[i] != text[(strlen(text) / 3) + i] || text[i] != text[2 * (strlen(text) / 3) + i]) {
            puts("NO!");
            return;
        }
    }
    puts("YES!");

}