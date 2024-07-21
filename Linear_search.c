#include<stdio.h>
void lin_search(int size , int arr[],int e){
    int found = 0;
    for(int i = 0 ; i < size ; i++){
        if(arr[i] == e){
            printf("element found at index %d",i);
            found = 1;
            break;
        }
    }
    if(!found){
            printf("Element does not found...");
        }
}
int main(){
    int n;
    printf("Enter size of the array - ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements - \n");
    for(int i =0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int e;
    printf("Enter element to be searched - ");
    scanf("%d",&e);
    lin_search(n,arr,e);
    return 0;
}