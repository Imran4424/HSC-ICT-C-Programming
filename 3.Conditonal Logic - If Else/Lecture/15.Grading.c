#include <stdio.h>

int main()
{
    float mark;
    scanf("%f", &mark);

    if(mark >= 80) {
        printf("A+\n");
    }

    if(mark >= 70 && mark <= 79) {
        printf("A\n");
    }

    if(mark >= 60 && mark <= 69) {
        printf("A-\n");
    }

    if(mark >= 50 && mark <= 59) {
        printf("B\n");
    }

    if(mark >= 40 && mark <= 49) {
        printf("C\n");
    }

    if(mark >= 33 && mark <= 39) {
        printf("D\n");
    }

    if(mark < 33) {
        printf("F\n");
    }

    return 0;
}
