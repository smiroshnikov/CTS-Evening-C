#include <stdio.h>

// program should have user input as a sigle character 
// and prints capital appropriately input  ('a') output ('A') 
// substract 32 to convert small to capital 
// add 32 to capitalize :) 
// Tatyana was constecting all this crap (just ask for 4/12/15 C )

void main() {
    char ch;
//    scanf("%c",&ch);
//    printf("%c",ch-32);
//    printf("%c",('a'-'A')); // WTF? try again ...
//    
//     ch = '2';
//     printf("%d",ch); // substract 42 to get the number '2'    
    scanf("%c", &ch);
//printf("%d",ch-'0'); // converting 'cipher' character to number add 48 or substract '0'
    printf("%d\n", !ch++); //will turn to 0 unless this is 1
    printf("%d\n", ++ch);
// we have 3 types of problems 
// 1 - compilation issue - usually syntax issue , program wont run. double click in VS will take us to the line  
// 2 - execution issue - example "int num; scanf("%d",num) - program will compile , and stop when executed 
// 3 - logic issue - best example 'division by zero' such as "printf("%d",num/0); invaid input is logic issue

}
