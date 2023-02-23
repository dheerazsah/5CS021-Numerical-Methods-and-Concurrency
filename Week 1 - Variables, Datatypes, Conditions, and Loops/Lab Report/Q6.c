/* 6. Write a program to print the following pattern using nested loop:
A
B B
C C C
D D D D
E E E E E */

#include <stdio.h>
void main() {
   int i, j;
   char letter = 65;
   
   for (i = 1; i <= 5; i++) {
      for (j = 1; j <= i; j++) {
         printf("%c ", letter);
      }
      
      printf("\n");
      letter += 1;
   }
}

#include <stdio.h>
int main() {
   int i, j;
   char a = 'A';
   char input = 'E';
  
   for (i = 1; i <= (input-'A'+1); ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ", a);
      }
      ++a;
      printf("\n");
   }
   return 0;
}



