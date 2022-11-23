#include<stdio.h>
void InsertionSort(int *A, int len);
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }
    InsertionSort(arr, n);
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    puts("");
}

void InsertionSort(int *A, int len){
    int key;
    for(int i = 1; i< len; i++){
        key = A[i];
        int j = i-1;
        while((A[j]>key)&&(j >= 0)){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}