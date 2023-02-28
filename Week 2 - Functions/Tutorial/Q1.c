// 1. Write a program in C to show the simple structure of a function.

#include <stdio.h>
int main (){
    int total;
    total = sum (5, 6);//function call
    printf ("The total is :  %d\n", total);
    return 0;
}
    
int sum (int a, int b) //function definition
{
    int s;
	s=a+b;
    return s; //function returning a value
}