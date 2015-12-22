#include <stdio.h>

int mySumDigit(int neo_number) {
    int last_digit;
    int sum_of_digits = 0;
// here I should use loop , but what is the condition ?! until number of digits is = 1 , number /10 !=0

    while ((neo_number / 10) != 0) {
        last_digit = neo_number % 10;
        sum_of_digits = sum_of_digits + last_digit;
        neo_number = (neo_number - last_digit) / 10; //this might be a problem !
    }
    return sum_of_digits + neo_number;
}

void main() {
    int result;

    result = mySumDigit(10019);
    printf("%d", result);
    printf("\n%d", 19 / 10);

}

/*int sumDigits (int num)
{
    int sum = 0;
    while (num!=0)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}

 */