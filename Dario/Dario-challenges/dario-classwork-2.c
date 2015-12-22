//
//  dario-classwork-2.c
//  classwork-01
//
//  Created by Sergei Miroshnikov on 21/12/2015.
//  Copyright © 2015 Sergei Miroshnikov. All rights reserved.
//

/* 
 צור פונקציה בשם  PRINT_ARRAY   המדפיסה את המערך .
 צור פונקציה בשם REVERSE שהופכת את סדר אברי המערך .
 צור פונקציה בשם  EVEN_ODD  המסדרת  את אברי המערך כך ש כל האיברים הזוגיים יופיעו בתחילת המערך וכל האיברים האי-זוגיים יופיעו בסופו .
 
 להלן התכנית הראשית :
 בפונקציה main  -
 
 1. צור מערך בגודל כלשהו ( יותר מ 10 ) עם ערכים התחלתיים .
 2. הדפס  את אברי המערך באמצעות פונקציית ההדפסה
 3. שלח את המערך לפונקציה REVERSE
 4. הדפס  את אברי המערך (לאחר השינוי)  באמצעות פונקציית ההדפסה
 5. שלח את המערך לפונקציה EVEN_ODD
 6.  הדפס  את אברי המערך (לאחר השינוי)  באמצעות פונקציית ההדפסה
 
*/

#include <stdio.h>

void PRINT_ARRAY(int [], int);

void REVERSE(int [], int);


int main() {
    int userArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(userArray) / sizeof(userArray[0]);
    PRINT_ARRAY(userArray, size);
    printf("*********\n");
    REVERSE(userArray, size);
    PRINT_ARRAY(userArray, size);
    return 0;
}

void PRINT_ARRAY(int userArray[], int sizeOfArray) {
    int i = 0;
    for (i = 0; i < sizeOfArray; i++)
        printf("userArray[%d] = %d \n", i, userArray[i]);
    printf("\n\n");

}

void REVERSE(int userArray[], int sizeOfArray) {
    int i = 0;
    int temp;
    //   int tempFirst;
//  int tempLast ;
    for (i = 0; i < sizeOfArray; i++) {
        temp = userArray[(sizeOfArray - 1) - i];
        if (((sizeOfArray - 1) - i) > i) {
            userArray[i] = temp;
            //       printf("%d",temp);
        } else break;

        //  printf("%d\n",temp);
        // tempFirst = userArray[i];
        // tempLast = userArray[(sizeOfArray-1)-i];
        //  printf("first %d\n",tempFirst);
        //printf("last %d\n",tempLast);
    }
    printf("\n\n");

}