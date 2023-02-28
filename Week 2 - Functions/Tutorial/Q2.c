// 2. Write a program in C to find the square of any number using the function.

#include<stdio.h>
int main()
{
    int num, square;
    printf("Enter a number: ");
    scanf("%d", &num);
   
    square = s(num);
    printf("Square of %d is= %d", num, square);
    return 0;
}

int s(int num)
{
    return (num * num);
}