#include <stdio.h>
//merge 
void merge(int a[], int low, int mid, int high){
    int i = low;
    int j = mid + 1;
    int k = 0;
    int temp[100];
    while (i <= mid && j <= high){
        if (a[i] < a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= mid){
        temp[k] = a[i];
        i++;
        k++;
    }
    while (j <= high){
        temp[k] = a[j];
        j++;
        k++;
    }
    for (i = low, k = 0; i <= high; i++, k++){
        a[i] = temp[k];
    }
}
//merge sort 
void mergeSort(int a[], int low, int high){
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
//main function
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[100];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    mergeSort(a, 0, n - 1);

    printf("Sorted array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}