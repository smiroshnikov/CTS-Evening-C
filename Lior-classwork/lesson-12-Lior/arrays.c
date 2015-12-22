#include <stdio.h>

# define N 5


int main() {
    //   const double pi=3.1417926;
//    const int x = 3;
    int a[N] = {4, 8, 5, 6, 7};
    int i;
//    int b[x]; //linux only

    a[4] = 999;
    for (i = 0; i < N; i++)
        printf("%d\t\n", a[i]);
//    printf("%d\n%f\n",b[x],pi);;
    return 0;
}
