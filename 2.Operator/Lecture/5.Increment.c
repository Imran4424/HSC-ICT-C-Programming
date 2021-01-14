#include <stdio.h>

int main()
{
    int x = 5;
    int a = 2, b = 3;

    /// pre increment
    /// x = x + 1; -> 5 + 1 = 6
    /// a = x + a; -> 6 + 2 = 8
    a = ++x + a; /// 6 + 2 = 8
    printf("a - %d, x - %d\n", a, x); /// a - 8, x - 6

    /// post increment
    /// b = x + b; -> 6 + 3 = 9
    /// x = x + 1; -> 6 + 1 = 7
    b = x++ + b; /// 6 + 3 = 9
    printf("b - %d, x - %d", b, x); /// b - 9, x - 7

    return 0;
}

/**
    ++ -> increment
    -- -> decrement

    Here, we will talk about increment
    Increment are two types
        1. Pre increment
        2. Post increment

    Pre increment, ++x; (++operand)
    x = x + 1;
    x;

    Post increment, x++; (operand++)
    x;
    x = x + 1;
*/
