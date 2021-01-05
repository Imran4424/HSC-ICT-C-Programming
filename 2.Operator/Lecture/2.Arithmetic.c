#include <stdio.h>

int main()
{
    /// variable declaration
    /// initialize
    int numOne = 5, numTwo = 2;

    int addition = numOne + numTwo;
    printf("Addition is - %d\n", addition);
    printf("%d + %d = %d \n\n", numOne, numTwo, addition);

    int substraction = numOne - numTwo;
    printf("Substraction is - %d\n", substraction);
    printf("%d - %d = %d \n\n", numOne, numTwo, substraction);

    int divisionResult = numOne / numTwo;
    printf("%d / %d = %d\n", numOne, numTwo, divisionResult);
    printf("The division Result is - %d\n", divisionResult);

    int remainder = numOne % numTwo;
    printf("%d modulo %d = %d\n", numOne, numTwo, remainder);
    printf("The remainder is - %d\n\n", remainder);

    /// fraction divide
    double x = 5;
    double y = 2;

    double z = x / y;
    printf("The division is - %lf\n", z);

    return 0;
}
