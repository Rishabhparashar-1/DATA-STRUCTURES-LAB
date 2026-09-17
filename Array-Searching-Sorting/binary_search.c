 #include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int target;
    printf("Enter the target element\n");
    scanf("%d",&target);
    int l=0;
    int h=n-1;
    int ans=-1;
    while(l<=h){
        int m=(l+h)/2;
        if(a[m]==target){
            printf("\nelemnt found at index %d\n",m+1);
            return 0;
        }
        else if(a[m]<target){
            h=m-1;
        }
        else{
            l=m+1;
        }
    }
    printf("\nelemnt not found\n");
    return 0;
}
