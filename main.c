#include <stdio.h>

int main() {
    int correctPIN = 1234;
    int pin;
    int attempts = 0;
    float balance = 1000.0;
    int choice;
    float amount;

    printf(" HERI BANK ATM \n");

    while (attempts < 3) {
        printf("Enter your PIN: ");
        scanf("%d", &pin);

        if (pin == correctPIN) {
            printf("Login successful!\n");
            break;
        } else {
            printf("Wrong PIN. Try again.\n");
            attempts++;
        }
    }

    if (attempts == 3) {
        printf("Too many attempts. Exiting...\n");
        return 0;
    }

    do {
        printf("\n MENU \n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Your balance is: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if (amount > 0) {
                    balance = balance + amount;
                    printf("Deposit successful! New balance: %.2f\n", balance);
                } else {
                    printf("Deposit must be positive.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Amount must be positive.\n");
                }
                else if (amount > balance) {
                    printf("Not enough balance.\n");
                }
                else {
                    balance = balance - amount;
                    printf("Withdrawal successful! New balance: %.2f\n", balance);
                }
                break;

            case 4:
                printf("Thank you for using the ATM!\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}

