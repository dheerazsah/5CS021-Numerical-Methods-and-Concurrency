#include <stdio.h>
int main(){
    int i,j;
    int a=5;
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