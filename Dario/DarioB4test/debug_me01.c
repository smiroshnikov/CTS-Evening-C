//
// Created by Sergei Miroshnikov on 04/01/2016.
//
#include <stdio.h>

int main() {
    int i = 1;
    int j = 4;
    while (--j)
        i < ++j ? printf("%d\n", --j) : printf("%d\n", i - j);
    //while (i+1?--i:j++)


    return 0;
}
