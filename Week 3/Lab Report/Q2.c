// #include <stdio.h>
// #include <string.h>

// int main () {
//    char s1[100], s2[100], temp;
//    int i, j, len1, len2;

//    printf("Enter first string: ");
//     gets(s1);
//     printf("Enter second string: ");
//     gets(s2);

//    len1  = strlen(s1);
//    len2 = strlen(s2);

//    // If both strings are of different length, then they are not anagrams

//    if( len1 == len2) {    
//     //   printf("%s and %s are not anagrams! \n", s1, s2);
//     // lets sort both strings first −

//         for (i = 0; i < len1-1; i++) {
//             for (j = 1; j < len1; j++) {
//                 if (s1[i] > s1[j]) {
//                     temp  = s1[i];
//                     s1[i] = s1[j];
//                     s1[j] = temp;
//                 }
//                 if (s2[i] > s2[j]) {
//                     temp  = s2[i];
//                     s2[i] = s2[j];
//                     s2[j] = temp;
//                 }
//             }
//         }
//    // Compare both strings character by character
//         for(i = 0; i<len1; i++) {
//             if(s1[i] != s2[i]) {    
//                 printf("Strings are not anagrams! \n");
//                 return 0;
//             } 
//         }
//         printf("Strings are  anagrams! \n");

//     }
//     else{
//            printf("Strings are not anagrams! \n");

//     }
//    return 0;
// }




#include <stdio.h>
#include <string.h>

int main (void) {
   char s1[100], s2[100], temp;
   int i, j, len1, len2;

   printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

   len1  = strlen(s1);
   len2 = strlen(s2);

   // If both strings are of different length, then they are not anagrams

   if( len1 != len2) {    
      printf("%s and %s are not anagrams. \n", s1, s2);
   }
   
   // lets sort both strings first −

   for (i = 0; i < len1-1; i++) {
      for (j = 1; j < len1; j++) {
         if (s1[i] > s1[j]) {
            temp  = s1[i];
            s1[i] = s1[j];
            s1[j] = temp;
         }
         if (s2[i] > s2[j]) {
            temp  = s2[i];
            s2[i] = s2[j];
            s2[j] = temp;
         }
      }
   }

   // Compare both strings character by character

   for(i = 0; i<len1; i++) {
      if(s1[i] != s2[i]) {    
         printf("%s and %s are not anagrams. \n", s1, s2);
         return 0;
      }
   }

   printf("Strings are anagrams. \n");
   return 0;
}

