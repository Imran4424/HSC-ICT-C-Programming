#include <stdio.h>

int main()
{
    double farenheit, celcius;
    printf("input temperature in farenheit\n");
    scanf("%lf", &farenheit);

    /// expression is a equation
    celcius = ((farenheit - 32) / 9) * 5;

    printf("temperature in celcius is - %lf\n", celcius);

    return 0;
}
