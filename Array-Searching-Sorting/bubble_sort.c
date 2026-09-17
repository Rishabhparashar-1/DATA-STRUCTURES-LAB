#include<stdio.h>
int main() {
    int i,j,n,temp;
    printf("Enter the size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Before sorting: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=n-1;j>0;j--)
        if(a[j]<a[j-1]){
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
     
    }
  printf("After sorting: \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);

    }
    return 0;
}