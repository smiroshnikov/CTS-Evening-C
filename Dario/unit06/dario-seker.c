#include <stdio.h>

void printArr(int arr[], int size);

void printHistogram(int arr[], int size);

void processResluts(int results[], int rSize, int score[], int sSize);


int main() {
    int myArr[] = {1, 3, 6, 4, 7, 8, 3, 9, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 5, 5, 8, 9, 7, 3,
                   1, 3, 6, 4, 7, 8, 3, 9, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 5, 8, 9, 7, 3};
    int score[10] = {0};

    int size = sizeof(myArr) / sizeof(myArr[0]); //sizeof returns size of array in bytes!!! FFS!


    puts("The Seker Results are :");
    printArr(myArr, size);
    processResluts(myArr, size, score, 10);
    puts("The Scores are :");
    printArr(score, 10);
    printHistogram(score, 10);
}

void printHistogram(int score[], int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        printf("%d: ", i);
        for (j = 0; j < score[i]; j++)
            printf("*");
        printf("\n");
    }
    printf("\n");

}


void printArr(int arr[], int size) {
    int i = 0;

    for (i = 0; i < size; i++)
        printf("arr[%d] = %d \n", i, arr[i]);

    printf("\n\n");

}

void processResluts(int results[], int rSize, int score[], int sSize) {
    int i;
    for (i = 0; i < rSize; i++) {
        if (results[i] > 0 && results[i] < sSize)
            score[results[i]]++;
    }


}
