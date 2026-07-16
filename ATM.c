#include <stdio.h>

float bal = 1000.0;
int pin = 1234;

void deposit(float amt)
{
    if (amt <= 0)
    {
        printf("Enter a valid amount.\n");
        return;
    }

    bal += amt;
    printf("Deposit Successful.\n");
    printf("Available Balance: %.2f\n", bal);
}

void withdraw(float amt)
{
    if (amt <= 0)
    {
        printf("Enter a valid amount.\n");
        return;
    }

    if (amt > bal)
    {
        printf("Insufficient Balance.\n");
        return;
    }

    bal -= amt;
    printf("Withdrawal Successful.\n");
    printf("Available Balance: %.2f\n", bal);
}

float checkBalance()
{
    return bal;
}

void changePin()
{
    int oldPin, newPin;

    printf("Enter Current PIN: ");
    scanf("%d", &oldPin);

    if (oldPin == pin)
    {
        printf("Enter New PIN: ");
        scanf("%d", &newPin);

        pin = newPin;
        printf("PIN Changed Successfully.\n");
    }
    else
    {
        printf("Incorrect PIN.\n");
    }
}

int main()
{
    int choice, enteredPin;
    float amt;

    while (1)
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Change PIN\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter PIN: ");
            scanf("%d", &enteredPin);

            if (enteredPin == pin)
            {
                printf("Enter amount to deposit: ");
                scanf("%f", &amt);
                deposit(amt);
            }
            else
            {
                printf("Incorrect PIN.\n");
            }
            break;

        case 2:
            printf("Enter PIN: ");
            scanf("%d", &enteredPin);

            if (enteredPin == pin)
            {
                printf("Enter amount to withdraw: ");
                scanf("%f", &amt);
                withdraw(amt);
            }
            else
            {
                printf("Incorrect PIN.\n");
            }
            break;

        case 3:
            changePin();
            break;

        case 4:
            printf("Enter PIN: ");
            scanf("%d", &enteredPin);

            if (enteredPin == pin)
            {
                printf("Available Balance: %.2f\n", checkBalance());
            }
            else
            {
                printf("Incorrect PIN.\n");
            }
            break;

        case 5:
            printf("Thank you for using the ATM!\n");
            return 0;

        default:
            printf("Invalid Choice.\n");
        }
    }

    return 0;
}
