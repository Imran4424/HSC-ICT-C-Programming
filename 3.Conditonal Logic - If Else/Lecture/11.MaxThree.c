#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if(x > y && x > z) {
        printf("%d is maximum\n", x);
    }

    if(y > x && y > z) {
        printf("%d is maximum\n", y);
    }

    if(z > x && z > y) {
        printf("%d is maximum\n", z);
    }

    return 0;
}

/**
Logical Operator
    || (logical OR)
    && (Logical AND)
    ! (NOT)

    here, we will talk about logical AND

    let's say we have 3 number x, y, z.
    find the maximum or the greatest number.

    x is max when, x > y AND x > z --> (x > y && x > z)
    y is max when, y > x AND y > z --> (y > x && y > z)
    z is max when, z > x AND z > y --> (z > x && z > y)
*/
