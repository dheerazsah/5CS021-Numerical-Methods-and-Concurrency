#include <stdio.h>

int sum(int size){

    int arr[size], add = 0;

    printf("Enter %d number: \n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    for (int a = 0; a < size; a++){
        if (arr[a] % 5 == 0 && arr[a] % 2 != 0 && arr[a] % 3 != 0) {
            printf ("\n%d ", arr[a]);
            add +=  arr[a];
        }
    }

    printf("\nSum of numbers= %d", add);
}

void main() {
    int size;
    printf("Enter length of array: ");
    scanf("%d", &size);
    sum(size);

}