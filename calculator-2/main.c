#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// The calculator takes 3 arguments: number, operator and anoter number
double calculate(double num1, char operator, double num2)
{
    if (operator == '-')
    {
        return num1 - num2;
    }
    if (operator == '+')
    {
        return num1 + num2;
    }
    if (operator == '/')
    {
        return num1 / num2;
    }
    if (operator == '*')
    {
        return num1 * num2;
    }
}

int main()
{
    double num1;
    double num2;
    // The operator is just one character long
    char operator = 'a';

    printf("Enter a number: ");
    scanf("%lf", &num1);
    while (operator != 'x')
    {
        printf("\nEnter operation (+, -, * or /): ");
        scanf(" %c", &operator);
        printf("Enter a number: ");
        scanf("%lf", &num2);
        printf("\nResult: %f", calculate(num1, operator, num2));
        num1 = calculate(num1, operator, num2);
    }
    return 0;
};

