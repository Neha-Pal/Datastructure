#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int* arr;
};

int isEmpty(struct stack* ptr){
    if(ptr -> top == -1){
        return 1;
    }
    return 0;
}

int isFull(struct stack* ptr){
    if(ptr -> top == ptr -> size-1){
        return 1;
    }
    return 0;
}

int main(){
    struct stack s;
    s.size = 10;
    s.top = -1;
    s.arr = (int*)malloc(s.size* sizeof(int));

    if(isEmpty(&s)){
        printf("Stack is Empty");
    }
    else{
        printf("Stack is not Empty");
    }
    return 0;
}