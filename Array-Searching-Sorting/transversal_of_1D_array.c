#include<stdio.h>
int main(){
    int a[100];
    int n;
    printf("Enter the number of element in the array");
    scanf("%d",&n);
     printf("Enter the element in the array");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Element in the array\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
