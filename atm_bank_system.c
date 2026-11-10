#include <stdio.h>

int main() {
    int choice, diposit, withdraw;
    int balance = 100000;

    while (1) {

        printf("\n=== ATM MENU ===\n");
        printf("1. Check balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Your balance = %d\n", balance);
                break;

            case 2:
                printf("Enter your amount: ");
                scanf("%d", &diposit);

                if (diposit > 0) {
                    balance += diposit;
                    printf("Deposit successful!\n");
                    printf("Balance = %d\n", balance);
                } else {
                    printf("Invalid amount\n");
                }
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%d", &withdraw);

                if (withdraw > 0 && withdraw <= balance) {
                    balance -= withdraw;
                    printf("Withdrawal successful!\n");
                    printf("Remaining balance = %d\n", balance);
                } else {
                    printf("Invalid amount or insufficient balance\n");
                }
                break;

            case 4:
                printf("Thank you for using ATM!\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}