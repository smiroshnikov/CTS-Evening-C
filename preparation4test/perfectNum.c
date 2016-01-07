#include <stdio.h>
#include <string.h>

int main() {

    int user_input = 1234567;
    int digit_location = 3;
    int sum_of_digits_b4_location = 0;
    int i = 0;
    int desired_digits = 0;
    for (i = digit_location; i > 0; i--) {
        user_input /= 10;
    }
    printf("%d\n", user_input);

    return 0;
}



/*


 n = 12345
k = 3
m = n/10**k
t = n/10**(k-1) % 10
# for i in xrange(1,k+1):
#     print i
#     m = n/10

    */