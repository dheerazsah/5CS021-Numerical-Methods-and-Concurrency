// 4. Write a program in C to check Armstrong and perfect numbers using the function.

#include <stdio.h>

void check_armstrong(){
    int num, r, add = 0, numO;
    printf("Enter a numbern (Check Armstrong): ");
    scanf("%d", &num);
    numO = num;

    while (num != 0){
        r = num  % 10;
        add += r*r*r;
        num /= 10;
    }
    if (numO == add){
        printf("%d is an armstrong number.\n", numO);
    } 
    else {
        printf("%d is not an armstrong number.\n", numO);
    }
}

void check_perfect(){
    int num, r, add = 0;
    printf("Enter a number: (Check Perfect)");
    scanf("%d", &num);

    for (int i = 1; i < num; i++){
      r = num % i;
      if (num % i == 0){
         add += i;
      }
    }
    
    if ( add == num){
      printf("%d is a perfect number.\n", num);
    }
    else {
      printf("%d is not a perfect number.\n", num);
    }
}

void main(){
    check_armstrong();
    check_perfect();
}