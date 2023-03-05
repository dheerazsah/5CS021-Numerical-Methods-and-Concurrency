#include <stdio.h>


int matrixSum(int matrix1[3][2], int matrix2[3][2]){

    int sum[3][2];

    for(int i=0;i< 3;i++) {
        for(int j=0;j< 2;j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("\nSumof 2 matrices:");
    for(int i=0;i< 3;i++) {
        printf("\n");
        for(int j=0;j< 2;j++) {
            printf("%d ", sum[i][j]);
        }
    }
}

int main(){
    int matrix1[3][2], matrix2[3][2];

    printf("Enter matrix elements: [3][2] \n");
    for(int i=0;i< 3;i++) {
        for(int j=0;j< 2;j++) {
            printf("matrix1[%d][%d] = ",i,j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    for(int i=0;i< 3;i++) {
        for(int j=0;j< 2;j++) {
            printf("matrix2[%d][%d] = ",i,j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    matrixSum(matrix1, matrix2);

    

}