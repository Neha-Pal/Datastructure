#include<stdio.h>
int bin_search(int arr[],int size,int element){
    int l,mid,h;//low mid and high value of the array
    l = 0;
    h = size-1;
    //searching
    while(l <= h){
        mid = (l+h)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid] < element){
            l = mid+1;

        }
        else{
            h = mid-1;
        }
    }
    //searching ends
    printf("not found");
}

int main(){
    int n,e;
    printf("Enter array size - ");
    scanf("%d",&n);
    printf("Elements should be in increasing order\n");
    int arr[n];
    printf("Enter elements - \n");
    for(int i = 0; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("Enter element to be searched - ");
    scanf("%d",&e);
    int search_index = bin_search(arr,n,e);
    printf("Element %d is found at index %d ",e,search_index);
    return 0;
}