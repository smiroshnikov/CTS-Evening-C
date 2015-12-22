# include <stdio.h>

int isEven(int);

int divideByTree(int);


int isEven(int number) {
    if (number % 2 == 0)
        return 1;
    else
        return 0;
}

int divideByTree(int number) {
    if (number % 3 == 0)
        return 1;
    else
        return 0;
}


int main() {
    int number = 246;
    int last_cypher;
    int counter = 0;

    while (number != 0) {
        last_cypher = number % 10;
        if (isEven(last_cypher)) {
            counter += 1;
        }

        number = number / 10;
        printf("\n last digit is %d", last_cypher);
        //   printf("\n current number is %d",number);

    }
    if (divideByTree(counter)) {
        printf("\n result 1");
    }
    else printf("\nresult 0");
}





