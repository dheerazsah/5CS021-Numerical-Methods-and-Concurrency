// Lab Report 01
// 1. Write a program to print out all triangular numbers from 1 to n (entered by user).
#include <stdio.h>
int main() {
    int num;
    int j = 1;
    int k = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++){
        printf(" %d ", k);
        j = j+1;
        k = k+j;
    }
    
    return 0;
}

#include <stdio.h>
int main(){
    int i,j;
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    for(i=1; i<=a; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
return 0;
}



