#include<stdio.h>

int main() {
    int choice;
    float balance = 1000, deposit, withdraw;

    //ATM functions that can be performed
    while (1) {
        printf("\n-------ATM Menu-------\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Please select your purpose(1-4) : \n");
        scanf("%d", &choice);

        //Operations
        switch (choice) {
            case 1:
                printf("Your Balance : Rs. %.2f\n", balance);
                break;
            
            case 2:
                printf("Please enter Deposit amount : \n");
                scanf("%f", &deposit);
                
                if(deposit > 0) {
                    balance = balance + deposit;
                    printf("Rs. %.2f\n deposited successfully.\n", deposit);
                    printf("Current balance : %.2f\n", balance);
                } else {
                    printf("Invalid deposit.\n");
                }
                break;
            
            case 3:
                printf("Please enter withdraw amount : \n");
                scanf("%f", &withdraw);
                if(withdraw > 0 && withdraw <= balance) {
                    balance = balance - withdraw;
                    printf("Rs. %.2f\n withdrwn successfully.\n", withdraw);
                    printf("Current balance : %.2f\n", balance);
                } else if( withdraw > 0 && withdraw > balance) {
                    printf("Insufficient balance.");
                } else {
                    printf("Invalid amount");
                }
                break;

            case 4 :
                printf("Thank you for visiting ATM.");
                return 0;
            
            default :
                printf("Invalid input. Please try again.");
        }
     }

     return 0;
}
