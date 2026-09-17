#include <stdio.h>
int main(){
    int arr[100][100];
    int r, c;
    int i, j;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nMatrix is:\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of matrix is:\n");
    for (i = 0; i < c; i++){
        for (j = 0; j < r; j++){
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
