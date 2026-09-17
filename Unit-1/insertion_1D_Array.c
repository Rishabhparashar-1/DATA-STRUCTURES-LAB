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
    int ele,pos;
    printf("Enter the element and its position");
    scanf("%d %d",&ele,&pos);
    for(int i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=ele;
    printf("Element in the array\n");
    for(int i=0;i<n+1;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
