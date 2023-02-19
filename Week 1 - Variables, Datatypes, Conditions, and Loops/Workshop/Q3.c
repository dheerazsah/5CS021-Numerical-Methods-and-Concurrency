// 3. Write a program to print out all triangular numbers from 1 up to nth term.
#include <stdio.h>
int main(){
    int i;
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
      printf(" %d ", i*(i+1)/2);
    }
return 0;
}