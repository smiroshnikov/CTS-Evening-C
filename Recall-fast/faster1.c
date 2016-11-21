#include<stdio.h>

int main(int argc, char *argv[]) {
    int distance = 100;
    int age = 191;
    int y = -100;
    long how_big_is_this = 1L * 1024L * 1024L * 1024L;
    double irrational_number = 4.54654654;
    //char nul_byte = '\0';
    char nul_byte = 'z';
    int result = y * nul_byte;

    printf("Distance is  %d miles away ", distance);
    printf("I am %d years old and feel perfectly fine ! ", age);
    if (age > 0)
        goto fail;
    fail :
    printf("FAILED y is %d", y);

    printf("This is %ld \n", how_big_is_this);
    printf("This is float %.3f \n", irrational_number);//works!
    printf("Multiplied char with int %d \n",result);


    return 0;
}
