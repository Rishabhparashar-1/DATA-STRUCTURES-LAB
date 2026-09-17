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
    for(i=1;i<n;i++){
         j=i;
        while(j>0&&a[j]<a[j-1]){   
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
    }
    }
  printf("\nAfter sorting: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);

    }
    return 0;
}