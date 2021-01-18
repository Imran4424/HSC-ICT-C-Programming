#include <stdio.h>

int main()
{
    int number;
    printf("Enter an Int number: ");
    scanf("%d", &number);

    if(number % 2 == 0) {
        printf("Number is Even\n");
    }

    if(number % 2 != 0) {
        printf("Number is Odd\n");
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

/**
    In mathematics,
        use one equal (=) for assignment
        use one equal (=) for comparison

    Computer,
        use one equal (=) for assignment
        use two equal (==) for comparison
*/
