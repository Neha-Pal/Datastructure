#include<stdio.h>
#include<stdlib.h>

void print(int*arr,int n){
    for(int i= 0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int selectionSort(int*arr,int n){
    int key,temp;
    for(int i=0;i<n-1;i++){
        key = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[key]){
                key = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[key];
        arr[key] = temp;
    }
}

int main(){
    int arr[] = {34,56,7,89,24,5};
    int n = 6;
    printf("Array before sorting -\n");
    print(arr,n);
    printf("Array after sorting - \n");
    selectionSort(arr,n);
    print(arr,n);
    return 0;
}