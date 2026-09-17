#include <stdio.h>
// get maximum
int getMax(int a[], int n){
    int max = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}
// counting sort
void countingSort(int a[], int n, int place){
    int output[100];
    int count[10] = {0};
    for(int i = 0; i < n; i++){
        count[(a[i] / place) % 10]++;
    }
    for(int i = 1; i < 10; i++){
        count[i] = count[i] + count[i - 1];
    }
    for(int i = n - 1; i >= 0; i--){
        output[count[(a[i] / place) % 10] - 1] = a[i];
        count[(a[i] / place) % 10]--;
    }
    for(int i = 0; i < n; i++){
        a[i] = output[i];
    }
}
// radix sort
void radixSort(int a[], int n){
    int max = getMax(a, n);
    for(int place = 1; max / place > 0; place = place * 10){
        countingSort(a, n, place);
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
    radixSort(a, n);
    printf("Sorted array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}