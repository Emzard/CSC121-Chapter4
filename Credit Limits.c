#include <stdio.h>

int main() {
    int accountNumber1, accountNumber2, accountNumber3;
    double creditLimit1, creditLimit2, creditLimit3;
    double currentBalance1, currentBalance2, currentBalance3;
    double newCreditLimit1, newCreditLimit2, newCreditLimit3;

    // Input for customer 1
    printf("Enter account number for customer 1: ");
    scanf("%d", &accountNumber1);
    printf("Enter credit limit before recession for customer 1: ");
    scanf("%lf", &creditLimit1);
    printf("Enter current balance for customer 1: ");
    scanf("%lf", &currentBalance1);

    // Input for customer 2
    printf("Enter account number for customer 2: ");
    scanf("%d", &accountNumber2);
    printf("Enter credit limit before recession for customer 2: ");
    scanf("%lf", &creditLimit2);
    printf("Enter current balance for customer 2: ");
    scanf("%lf", &currentBalance2);

    // Input for customer 3
    printf("Enter account number for customer 3: ");
    scanf("%d", &accountNumber3);
    printf("Enter credit limit before recession for customer 3: ");
    scanf("%lf", &creditLimit3);
    printf("Enter current balance for customer 3: ");
    scanf("%lf", &currentBalance3);

    // Calculate new credit limit for each customer
    newCreditLimit1 = creditLimit1 / 2;
    newCreditLimit2 = creditLimit2 / 2;
    newCreditLimit3 = creditLimit3 / 2;

    // Check if current balance exceeds new credit limit for each customer
    if (currentBalance1 > newCreditLimit1) {
        printf("Customer 1's current balance exceeds their new credit limit of $%.2f\n", newCreditLimit1);
    } else {
        printf("Customer 1's new credit limit is $%.2f\n", newCreditLimit1);
    }

    if (currentBalance2 > newCreditLimit2) {
        printf("Customer 2's current balance exceeds their new credit limit of $%.2f\n", newCreditLimit2);
    } else {
        printf("Customer 2's new credit limit is $%.2f\n", newCreditLimit2);
    }

    if (currentBalance3 > newCreditLimit3) {
        printf("Customer 3's current balance exceeds their new credit limit of $%.2f\n", newCreditLimit3);
    } else {
        printf("Customer 3's new credit limit is $%.2f\n", newCreditLimit3);
    }

    return 0;
}

