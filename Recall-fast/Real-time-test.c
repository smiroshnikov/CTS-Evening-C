//
// Created by miross1 on 11/22/2016.
//

#include <stdio.h>

int checkOnes(int num);
//func definition remember CTS

    void main()
    {
        int num ;
        printf("num:");
        scanf("%d",&num);
        int numberOfBits = checkOnes(num);
        printf("there is %d ones in %d \n",numberOfBits,num);
    }
    int checkOnes(int num){
        int count = 0;
        while (num)
        {
            count ++;
          //  printf("before - %d\n",num);
            num&=(num-1); // that's my question?
           // printf("after - %d\n",num);
        }
        return count;
    }




