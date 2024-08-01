#include<stdio.h>
#include<stdlib.h>

void print(int* arr,int n){
    for(int i = 0; i < n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void bubbleSort(int* arr,int n){
    int temp;
    for(int i = 0; i < n-1; i++){//for no of pass
        for(int j = 0; j < n - 1 - i; j++){//for comparisn in each pass
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    
    int arr[] = {2,34,6,89,33,67,2};
    int n = 7;
    printf("Array before sorting - \n");
    print(arr,n);
    printf("Array after sorting - \n");
    bubbleSort(arr,n);
    print(arr,n);
    return 0;
}