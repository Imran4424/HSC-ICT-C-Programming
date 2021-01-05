#include <stdio.h>
#define PI 3.1416 /// constant declaration using
                 ///  macro(pre-processor)

int main()
{
    /// printing PI using double
    printf("PI value in double %lf\n", PI);

    /// printing PI using int
    /// this is wrong, cause PI is not int
    /// that's why it will give you wrong value
    printf("PI value in int %d\n", PI);

    /// we can not change value of constants
    /// otherwise it will show error
    /// PI = 3.14;

    return 0;
}

/**
    In this code, we will learn about constants.
    As we know, constants value never change

    One common example of constant is, PI

    PI = 3.1416

    Here, we will learn about declaring constant in C program

    There are two way to define constant,

    one is,
    Using macro, that is #define

    Another is,
    Using const keyword

    In this code, we will define constant using macro(pre-processor)
*/
