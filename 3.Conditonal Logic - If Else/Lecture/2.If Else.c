#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    if(number % 2 == 0) {
        printf("Number is even");
    } else {
        printf("Number is Odd");
    }

    return 0;
}

/**
    Condition have two states
        1. True
        2. False

    Conditional Decision Making
        True -> Desired Work
        False -> Desired Work

    number % 2 == 0
        True -> Even
        False -> Odd
*/
