/* 6. Print the following pattern using nested loop:
A
B B
C C C
D D D D
E E E E E */

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
