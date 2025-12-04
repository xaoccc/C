#include <stdio.h>
#include <stdlib.h>
/* Types of data and printf */
int main()
{
    double num1;
    double num2;
    printf("Enter a number:\n", num1);
    scanf("%lf", &num1);
    printf("Enter another number:\n", num2);
    scanf("%lf", &num2);
    printf("the result is %f", num1 + num2);

    return EXIT_SUCCESS;
}
