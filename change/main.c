#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

double exchangeRate = 1.95583;

double calculate(double bill, double payment, char billCurrency[10], char paymentCurrency[10])
{
    if (strcmp(billCurrency, "eur") == 0 && strcmp(paymentCurrency, "eur") == 0)
    {
        return payment - bill;
    }
    else if (strcmp(billCurrency, "bgn") == 0 && strcmp(paymentCurrency, "eur") == 0)
    {
        return payment - (bill / exchangeRate);
    }
    else if (strcmp(billCurrency, "eur") == 0 && strcmp(paymentCurrency, "bgn") == 0)
    {
        return (payment / exchangeRate) - bill;
    }
    else if (strcmp(billCurrency, "bgn") == 0 && strcmp(paymentCurrency, "bgn") == 0)
    {
        return (payment - bill) / exchangeRate;
    }
    else
    {
        return -1;
    }
}

int main()
{
    double bill, payment, changeEUR;
    char billCurrency[10], paymentCurrency[10];
    printf("Instructions:\n Enter numbers, using dot as a decimal separator, then space, then currency. Valid currencies are 'eur' and 'bgn'. Example: '66.6 bgn'\n");
    while (1) {
        printf("My bill is: ");
        int resultBill = scanf("%lf %9s", &bill, billCurrency);

        if (resultBill != 2) {
            printf("Invalid input. Try again!\n");
            while (getchar() != '\n');
            continue;
        }

        printf("My payment is: ");
        int resultPayment = scanf("%lf %9s", &payment, paymentCurrency);

        if (resultPayment != 2) {
            printf("Invalid input. Try again!\n");
            while (getchar() != '\n');
            continue;
        }

        if (resultBill == 2 && resultPayment == 2) {
            changeEUR = calculate(bill, payment, billCurrency, paymentCurrency);
            if (changeEUR != -1) {
                printf("Change in eur: %.2f\n", changeEUR);
                printf("Change in bgn: %.2f\n", changeEUR * exchangeRate);
                break;
            } else {
                printf("Invalid input. Try again!\n");
            }
        }       
    }

    Sleep(10000);
    return 0;
};
