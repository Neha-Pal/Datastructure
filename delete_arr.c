#include<stdio.h>
int traverse(int arr[],int size){
    for(int i = 0;i< size; i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");
}
int delete_arr(int arr[],int size, int index){
    for(int i = index; i<size-1 ; i++){
        arr[i] = arr[i+1];
    }
    return 1;
}
int main(){
    int size;
    int index;
    printf("Enter size - ");
    scanf("%d",&size);
    printf("Enter elements - \n");
    int arr[size];
    for(int i = 0; i <size ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array - ");
    traverse(arr,size);
    printf("Enter the index from where we want to delete the element - ");
    scanf("%d",&index);
    delete_arr(arr,size,index);
    size--;
    printf("New array - ");
    traverse(arr,size);
}