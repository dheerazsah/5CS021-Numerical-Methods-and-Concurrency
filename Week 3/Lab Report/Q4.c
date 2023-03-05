
#include<stdio.h>
int main(){
    int arr[6] = {12,145, 1, 1001, 124, 5};
    int i,j,temp;
    
    for (i=0;i<6;i++){
        for (j=i+1;j<6;j++){
             if (arr[i] > arr[j])

            {
                temp =  arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
    }

       for (i=0;i<6;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}





// #include <stdio.h>

// int main(){
//     int ln,i, j, temp;

//     // printf("Length of Array: ");
//     // scanf("%d", &len);
//     int arr[]={12,145, 1, 1001, 124, 5};



//     for ( i = 0; i < ln; i++ ){
//         for ( j = i+1; j < ln; j++){
//             if (arr[i] > arr[j]) {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (i=0;i<ln;i++)
//     {
//         printf("%d ",arr[i]);
//     }

// }