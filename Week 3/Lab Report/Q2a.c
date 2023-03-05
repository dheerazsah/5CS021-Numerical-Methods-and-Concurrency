#include<stdio.h>
#include<string.h>
void checkAnagram(char firstWord[], char secondWord[]) {
    int checkAnargm;
    int ln1 = strlen(firstWord);
    int ln2 = strlen(secondWord);
    if(ln1 == ln2) {
        for(int i = 0; i < ln1; i++) {
            checkAnargm = 1;
            for(int j = 0; j < ln1; j++) {
                if(firstWord[i] == secondWord[j]) {
                    checkAnargm = 0;
                    break;
                }
            }
        }
        if(checkAnargm == 0) {
            printf("Given words are Anagram!");
            return;
        } else {
            printf("Given words are not Anagram!");
            return;
        }
    } else {
        printf("Given words are not Anagram!");
        return;
    }
}

void main() {
    char firstWord[10], secondWord[10];
    printf("Enter first word: ");
    gets(firstWord);
    printf("Enter second word: ");
    gets(secondWord);
    checkAnagram(firstWord, secondWord);
    return;
}