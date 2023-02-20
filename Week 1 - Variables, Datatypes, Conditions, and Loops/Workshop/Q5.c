// 5. Make changes in the program of Question Number 4. Ask characters from the user until an enter key is pressed.
// Hint: The ASCII Value of Enter key is 13.

#include<stdio.h>
void main(){
//declaring the variable ch
char ch;
//asking user to enter a character
printf("Enter a character:");
//getche is used to read the single character entered by the user which gets displayed immediately on screen without waiting for the enter key
ch=getche();
//while loop if ch values if not equal to 13 the program keeps getting executed
while(ch!=13){
    //takes characters value from A to Z
    if(ch>='A'&& ch<='Z'){
    //converts the entered character into lower case if the user inputs a uppercase character
        ch=ch+32;
    }
    //prints the entered character
    printf("\n %c",ch);
    //asks the user to enter the character again if the ch value is not equal to 13
    printf("\n enter the character again: ");
    ch=getche();
    
}