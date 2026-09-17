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
    int pos;
    printf("Enter the position to remove an element");
    scanf("%d",&pos);
    for(int i=pos-1;i<=n;i++){
        a[i]=a[i+1];
    }
    
    printf("Element in the array\n");
    for(int i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
