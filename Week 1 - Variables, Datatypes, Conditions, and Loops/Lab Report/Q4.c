// 4. Write a program to input a character from the user until an enter
// is pressed and print it in lowercase. If the character is in uppercase,
// then you must change it in lowercase and if it is in lowercase then
// you must print as it is.

#include<stdio.h>
void main(){
char ch;
printf("Enter an alphabet:");
ch=getche();
while(ch!=13){
    if(ch>='A'&& ch<='Z'){
        ch=ch+32;
    }
    printf("\n %c",ch);
    printf("\n Enter an alphabet: ");
    ch=getche();  
}
}