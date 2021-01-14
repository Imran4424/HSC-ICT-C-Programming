#include <stdio.h>

int main()
{
    int x = 5;
    int a = 2, b = 3;

    a = --x + a; /// 4 + 2 = 6
    printf("a - %d, x - %d\n", a, x); /// a - 6, x - 4

    b = x-- + b; /// 4 + 3 = 7
    printf("b - %d, x - %d\n", b, x); /// b - 7, x - 3

    return 0;
}

/**
    ++ -> increment
    -- -> decrement

    Here, we will talk about decrement
    Decrement are two types
        1. Pre decrement
        2. Post decrement

    Pre decrement, --x; (--operand)
    x = x - 1;
    x;

    Post decrement, x--; (operand--)
    x;
    x = x - 1;
*/
