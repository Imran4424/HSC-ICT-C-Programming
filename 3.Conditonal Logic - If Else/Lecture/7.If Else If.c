#include <stdio.h>

int main()
{
    int numOne, numTwo;
    scanf("%d %d", &numOne, &numTwo);

    if(numOne > numTwo) {
        printf("Maximum is %d\n", numOne);
    } else if(numOne < numTwo) {
        printf("Maximum is %d\n", numTwo);
    } else if(numOne == numTwo) {
        printf("%d and %d both are equal", numOne, numTwo);
    }

    return 0;
}

