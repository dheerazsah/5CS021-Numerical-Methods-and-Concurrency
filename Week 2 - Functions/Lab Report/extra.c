#include <stdio.h>

void check_armstrong(){
    int num, r, add = 0, numO;
    printf("Enter a numbern : ");
    scanf("%d", &num);
    numO = num;

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

    int addNum = 0;

    while (num != 0){
        r = num  % 10;
        addNum += r*r*r;
        num /= 10;
    }
    if (numO == addNum){
        printf("%d is an armstrong number.\n", numO);
    } 
    else {
        printf("%d is not an armstrong number.\n", numO);
    }
}

int main(){
    check_armstrong();
    return 0;
}