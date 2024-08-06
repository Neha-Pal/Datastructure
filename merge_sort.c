#include<stdio.h>
#include<stdlib.h>

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void mergeSort(int arr_1[],int arr_2[],int arr_3[],int m,int n){
    int i,j,k;
    i = j = k = 0;
    while(i<m && j<n){
        if(arr_1[i]<arr_2[j]){
            arr_3[k] = arr_1[i];
            i++;
        }else{
            arr_3[k] = arr_2[j];
            j++;
        }
        k++;
    }
    //copy remaining elements of arr_1
    while(i<m){
        arr_3[k] = arr_1[i];
        i++;
        k++;
    }
    //copy remaining elements of arr_2
    while(j<n){
        arr_3[k] = arr_2[j];
        j++;
        k++;
    }
}

int main(){

    int arr_1[] = {2,4,6,78,54};
    int arr_2[] = {3,56,67,80};
    int arr_3[9];
    printf("Array 1 -\n");
    print(arr_1,5);
    printf("Array 2 -\n");
    print(arr_2,4);
    mergeSort(arr_1,arr_2,arr_3,5,4);
    printf("New Array -\n");
    print(arr_3,9);
    return 0;
}