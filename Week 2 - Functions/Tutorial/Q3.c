// 3. Write a program in C to swap two numbers using function.
	
#include<stdio.h>  
int swap(int x, int y); 
int main(){  
    int a, b;  
    printf("Enter value for a: ");  
    scanf("%d", &a);  
    printf("Enter value for b: ");  
    scanf("%d", &b);  
    
    printf("Before swapping: a = %d & b = %d", a, b);  
    swap(a, b);  
    return 0;  
}  
  
swap(int x, int y)  
{  
    int temp;  
    temp = x;  
    x = y;  
    y = temp;  
    printf("\nAfter swapping: a = %d & b = %d", x, y);  
    return 0;
}  