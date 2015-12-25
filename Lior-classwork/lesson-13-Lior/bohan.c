//
// Created by Sergei Miroshnikov on 25/12/2015.
//

#include <stdio.h>

int main() {
    int i = 0;
    char s[6];
    int x;
    while (s[i] != '\0') {
        putchar(s[i++]);
        printf("\n");

        x = i++ ? 0 : 1;
        if (i) { x++; }

        // x=2 y=3
        // if ((x++ > y) && !(x>y++)) =1
        // x=3,y=3
        // x = -1;
        // y= x ? 1:2 // if x has a value it is ALWAYS TRUE
        // y = x? 1: 2
        // y = 1
        // x ++;
        /*

         x = -1;
         y = x++ ? 0:1
         if (y)
         x ++
         x = x++
         y = --x


         if(!y++)
         x++;
         at some point if (!y) might be equal to if(!y++) it will evaluate to the same flag (y still will be changed)
         use table

         */
    }
    return 0;
}