
/* 5. Write a program to ask the final score from user and print it
whether he/she is passed in (distinction above 80%, first division
above 60% to 80%, second division above 50% to 60%, Third
division above 40% to 50%, and fail below 40%). It is mandatory to
use elseif statement to solve the task */

#include <stdio.h>
int main(){
    float finalScore;
    printf("Enter final score between 0-100%: ");
    scanf("%f", &finalScore);
    
    if(finalScore>=80){
    printf("Distinction");
    }
    else if(finalScore>=60 && finalScore<80){
    printf("First Division");
    }
    else if(finalScore>=50 && finalScore<60){
    printf("Second Division");
    }
    else if(finalScore>=40 && finalScore<50){
    printf("Third Division");
    }
    else
    printf("Fail");
return 0;
}