// 4. Write a program to input a character from the user and print it in lowercase. If the
//character is in uppercase then you have to change it in lowercase and if it is in
//lowercase then you have to print as it is.

#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch>=65 && ch<=90){
        ch=ch+32;
        printf("%c", ch);
    }
    else if(ch>=97 && ch<=122){
        ch=ch-32;
        printf("%c", ch);
    }
    return 0;
}