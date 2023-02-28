// 4. Write a program in C to check a given number is even or odd using the function.

#include <stdio.h>
 
// function to check even or odd numbers
int isEven(int n){
  if(n%2==0){
    printf("\n%d is an even number",n);
  }
  else{
    printf("\n%d is an odd number",n);
  }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    isEven(n); //calling the function
    return 0;
}