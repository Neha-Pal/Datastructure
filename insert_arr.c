#include <stdio.h>

void traverse(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int insert_arr(int size, int index, int arr[], int element, int capacity) {
    if (size >= capacity) {
        return -1;
    }
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
    return 0;
}

int main() {
    int capacity = 100;  
    int n;
    printf("Enter size of array - ");
    scanf("%d", &n);
    int arr[capacity];  
    printf("Enter elements- \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("array is - ");
    traverse(arr, n);

    int e, index;
    printf("Enter element to be inserted - ");
    scanf("%d", &e);
    printf("Enter the index where you want to insert the element - ");
    scanf("%d", &index);

    if (insert_arr(n, index, arr, e, capacity) == 0) {
        n ++;
        printf("New array - \n");
        traverse(arr, n);
    } else {
        printf("Insertion failed, array is at full capacity.\n");
    }

    return 0;
}
