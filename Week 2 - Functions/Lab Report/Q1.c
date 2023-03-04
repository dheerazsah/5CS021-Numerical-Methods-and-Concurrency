// 1. Write a C program to find cube of a number using function.

#include <stdio.h>

void cubeNum(){
    int num, cube;
    printf("Enter a number: ");
    scanf("%d", &num);
    cube =  num*num*num;

    printf("Cube of %d is %d.", num, cube);
}

void main(){
    cubeNum();
}
