// 3. Write a void function which takes one integer (n) as a parameter. Your function should
// then print out all triangular numbers from 1 up to the nth term.

#include <stdio.h>
void triangularSeries(int n)
{
    int i, j = 1, k = 1;
    for (i = 1; i <= n; i++) {
        printf(" %d ", k);
        j = j + 1;
        k = k + j;
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    triangularSeries(n);
    return 0;
}
