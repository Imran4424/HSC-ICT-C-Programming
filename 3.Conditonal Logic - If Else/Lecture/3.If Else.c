/**
    Write a program that read two numbers and display maximum
*/

#include <stdio.h>

int main()
{
    int numOne, numTwo;
    scanf("%d %d", &numOne, &numTwo);

    if(numOne > numTwo) {
        printf("Maximum is %d\n", numOne);
    } else {
        printf("Maximum is %d\n", numTwo);
    }

    return 0;
}

/**
    if (condition) {
        // for true
        statement
    } else {
        /// for else
        statements
    }

    relations between two numbers x, y

        x is bigger than y, x > y

        x is lesser than y, x < y
        x is equal to y, x == y
*/
