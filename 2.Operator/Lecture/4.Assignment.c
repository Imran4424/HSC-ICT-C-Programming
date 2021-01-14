#include <stdio.h>

int main()
{
    int a = 5, b = 7, x;

    x = a + b; /// 5 + 7 = 12
    a = x; /// 12
    b = a + b; /// 12 + 7 = 19
    x = a - x; /// 12 - 12 = 0
    x = 27 - x; /// 27 - 0 = 27
    b = x + b; /// 27 + 19 = 46
    x = x + a + b; /// 27 + 12 + 46 = 85

    printf("value - %d\n", x); /// 85
    return 0;
}

