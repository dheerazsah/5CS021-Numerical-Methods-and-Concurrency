// 3. Write a program to create simple calculator using switch case. 
// (The operators +, -, *, /and % must be asked to user as a character.)

#include <stdio.h>
int main(){
    char ch;
    int a, b;
    int result;
    printf("Enter an operator (+, -, *, /, %): ");
    scanf("%c", &ch);
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    
    switch(ch){
        case '+':
            result = a+b;
            break;
        case '-':
            result = a-b;
            break;
        case '*':
            result = a*b;
            break;

        case '/':
            result = a/b;
            break;
        case '%':

            result = a%b;
            break;
    }
    printf("Result = %d", result);
    return 0;
}