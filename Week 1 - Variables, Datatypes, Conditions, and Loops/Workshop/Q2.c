//2. Write a program to find the factorial of a number.
#include <stdio.h>
int main(){
    int i;
    int num;
    int fact=1;
    printf("Enter a number:");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        fact= fact*i;
    }
    printf("%d", fact);
return 0;
}