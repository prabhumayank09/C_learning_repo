#include<stdio.h>

int num, sum, digit1, digit2, digit3, digit4;
int digitsum();

int main() {
    printf("Please enter a number(four digit limit) : ");
    scanf("%d", &num);

    digitsum();

    return 0;
}

int digitsum() {
    digit1 = num / 1000;
    digit2 = (num / 100) % 10;
    digit3 = (num /10) % 10;
    digit4 = num % 10;

    sum = digit1 + digit2 + digit3 + digit4;
    
    return printf("The sum of digits is : %d\n", sum);

}
