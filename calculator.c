#include<stdio.h>

int main() {
    float num1, num2;
    char op;

    printf("Please enter the first number : ");
    scanf(" %f", &num1);

    printf("Please enter the operator(+,-,*,/) : ");
    scanf(" %c", &op);

    printf("Please enter the second number : ");
    scanf(" %f", &num2);

    switch(op) {
        case '+' :
        printf("Result : %.2f\n", num1 + num2);
        break;

        case '-' :
        printf("Result : %.2f\n", num1 - num2);
        break;

        case '*' :
        printf("Result : %.2f\n", num1 * num2);
        break;

        case '/' :
        if(num2 != 0) {
            printf("Result : %.2f\n", num1 / num2);
        } else {
            printf("Error! A number cannot be devided by zero!");
        }
        break;
        
    default:
        printf("Error! Invalid operator!");
    }

return 0;
}