#include <stdio.h>

int main()
{
    int numOne, numTwo;
    scanf("%d %d", &numOne, &numTwo);

    if(numOne > numTwo) {
        printf("maximum is %d\n", numOne);
    }

    if(numOne < numTwo) {
        printf("maximum is %d\n", numTwo);
    }

    if(numOne == numTwo) {
        printf("%d and %d are equal\n", numOne, numTwo);
    }

    return 0;
}

/**
        relations between two numbers x, y

        x is bigger than y, x > y
        x is lesser than y, x < y
        x is equal to y, x == y
*/
