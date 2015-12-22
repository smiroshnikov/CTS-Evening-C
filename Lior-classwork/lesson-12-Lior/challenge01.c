//
//  challenge01.c
//  Lior_classwork
//
//  Created by Sergei Miroshnikov on 18/12/2015.
//  Copyright © 2015 Sergei Miroshnikov. All rights reserved.
//

#include <stdio.h>

# define N 5

int main() {
    int a[N];
    int i;
    int evenCounter = 0;

    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            evenCounter += 1;
    }

    printf("%d", evenCounter);
    return 0;
}
