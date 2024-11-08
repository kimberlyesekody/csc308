#include <stdio.h>

int main() {
    float accountBalance = 10000;
    float credit = 50000;
    float debit = 20000;

    int accountBalance = 10000;
    int credit = 50000;

    accountBalance += credit;
    accountBalance -= debit;

    printf("%f\n", accountBalance);

    // int newVeriable = accountBalance + credit

    return 0;
}