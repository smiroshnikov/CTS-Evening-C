// functions - repeatable sub program  
// function can of the following type 
// int , double , float , char , void (no value)
// first line in function is called function signature
#include <stdio.h>

int summary(int a, int b) // return sum , which is in
{
    int sum = a + b;
    return sum;
}

int main() {
    int x = 3, y = 8;
    int s;
    s = summary(x, y);
    printf("%d\n", s);
    return 0;


}
