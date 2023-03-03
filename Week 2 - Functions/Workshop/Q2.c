// 2. Write a function that takes two integers as arguments and return the greatest among them.

#include<stdio.h>
int num(int a, int b){
    if(a>b){
    printf("\n %d is the greater number",a);
    }
    else{
    printf("\n %d is the greatest number",b);
    }
}
int main ()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    num(a,b);//argument or acutal parameter
    return 0;
}