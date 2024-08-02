#include<stdio.h>
#include<stdlib.h>

void print(int* arr,int n){
    for(int i = 0;i < n ; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void insertionSort(int* arr,int n){
    int key;
    for(int i = 1; i <= n-1 ; i++){//for passes
        key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){//for each pass
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {45,66,2,89,90,4};
    int n = 6;
    printf("Array before sorting - \n");
    print(arr,n);
    printf("Array after sorting - \n");
    insertionSort(arr,n);
    print(arr,n);
    return 0;
}