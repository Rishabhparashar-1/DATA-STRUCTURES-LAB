#include <stdio.h>
int main(){
    int arr1[100][100], arr2[100][100], mul[100][100];
    int r1, c1, r2, c2;
    int i, j, k;
    printf("Enter number of rows of first matrix: ");
    scanf("%d", &r1);
    printf("Enter number of columns of first matrix: ");
    scanf("%d", &c1);
    printf("Enter number of rows of second matrix: ");
    scanf("%d", &r2);
    printf("Enter number of columns of second matrix: ");
    scanf("%d", &c2);
    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < r1; i++){
        for (j = 0; j < c1; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < r2; i++){
        for (j = 0; j < c2; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0; i < r1; i++){
        for (j = 0; j < c2; j++){
            mul[i][j] = 0;

            for (k = 0; k < c1; k++){
                mul[i][j] = mul[i][j] + arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf("\nMultiplication of two matrices is:\n");

    for (i = 0; i < r1; i++){
        for (j = 0; j < c2; j++){
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
