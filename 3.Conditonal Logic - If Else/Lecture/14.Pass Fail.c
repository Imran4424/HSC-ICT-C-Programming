#include <stdio.h>

int main()
{
    double mark;
    scanf("%lf", &mark);

    if(mark >= 33) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
