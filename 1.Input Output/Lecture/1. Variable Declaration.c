#include <stdio.h>

int main()
{
    /// variable declaration
    /// TYPE Variable_Name;
    int neha;

    /// multiple variable declaration
    /// TYPE Variable_Name, Another_Variable_Name;
    double nisu, imran;

    /// value assign
    neha = 7;

    /// multiple value assign
    neha = 89;
    nisu = 7.14;

    /// value print
    printf("Neha's value is - %d\n", neha);

    /// variable declaration
    float mark;
    /// value assign
    mark = 97.0;
    /// value print
    printf("Neha's mark is - %f\n", mark);

    /// variable declaration & value assign
    /// initialization
    double weight = 55;
    printf("Neha's weight is %lf\n", weight);

    /// initialization - variable declaration & value assign
    /// TYPE Variable_Name = value;
    double i = 7.7;

    /// multiple variable initialization
    /// TYPE Variable_Name = value, Another_Variable_Name = value;
    int x = 7, y = 3;

    double first = 10.5, second = 7.5, third = 5.5;

    /// this line will generate error
    /// int x = 7, int y = 7;

    /// variable declaration & value assign
    /// initialization
    char letter = 'N';
    printf("Neha's first letter is %c\n", letter);

    return 0;
}
/**
    Format specifier
    %d - int - Integer
    %f - float - Float
    %lf - double - Double
    %c - char - Character
*/







