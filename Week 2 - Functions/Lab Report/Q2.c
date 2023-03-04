#include <stdio.h>

void swapNum(){
    int num1, num2, exchange;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping: \n");
    printf("num1 = %d \n", num1);
    printf("num2 %d \n", num2);

    exchange = num1;
    num1 = num2;
    num2 = exchange;

    printf("\nAfter swapping: \n");
    printf("num1= %d \n", num1);
    printf("num2= %d \n", num2);
}

void main(){
    swapNum();
}