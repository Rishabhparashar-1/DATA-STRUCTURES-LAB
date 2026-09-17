#include <stdio.h>
// partition
int partition(int a[], int low, int high){
    int pivot = a[high];
    int i = low - 1;
    int temp;
    for(int j = low; j < high; j++){
        if(a[j] < pivot){
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;
    return i + 1;
}
// quick sort
void quickSort(int a[], int low, int high){
    if(low < high){
        int p = partition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}
// main function
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[100];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    quickSort(a, 0, n - 1);
    printf("Sorted array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}