#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int target;
    int loc=-1;

    printf("Enter the target element\n");
    int flag=-1;
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(a[i]==target){
            flag=1;
            loc=i;
            break;
        }
    }
    if(flag==1){
        printf("Element is present\n");
        printf("At index = %d\n",loc);
    }else{
        printf("Element not found");
    }
    return 0;
}
