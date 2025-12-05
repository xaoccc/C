#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>   

char nums[] = {1, 2, 3, 14, 33};
char operations[] = "+-/*";

void calculate(double num1, char operator[4], double num2) {
    if (strcmp(operator, "-") == 0) {
        printf("\nResult: %f", num1 - num2);
    }
    else if (strcmp(operator, "+") == 0) {
        printf("\nResult: %f", num1 + num2);
    }
    else if (strcmp(operator, "/") == 0) {
        printf("\nResult: %f", num1 / num2);
    }
    else if (strcmp(operator, "*") == 0) {
        printf("\nResult: %f", num1 * num2);
    }
    
}

int main()
{
    double num1;
    double num2;
    char operator[4];
    printf("enter a number: ");
    scanf("%lf", &num1);
    printf("enter operation: ");
    scanf("%s", operator);
    printf("enter another number: ");
    scanf("%lf", &num2);
   
    calculate(num1, operator, num2);
    Sleep(3000);
    return 0;
}

