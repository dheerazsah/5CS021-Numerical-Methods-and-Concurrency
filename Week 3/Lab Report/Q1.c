#include <stdio.h>

int great(int a){
    int arr[a];
    
    printf("\nEnter %d elements: ", a);
     for (int j=0;j<a;j++){
         scanf("%d",&arr[j]);
   }

    for (int i = 0; i < a; ++i) {
        for (int j = 1; j < a; j++) {
            if (arr[i] < arr[j]) {
            arr[i] = arr[j];
            }
        }
    }

    printf("\nLargest number in Array =  %d",arr[0]);
}

void main() {
    int a;
    printf("Enter array size: ");
    scanf("%d",&a);
    great(a);
}