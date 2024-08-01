#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int size;
    int f;
    int r;
    int* arr;
};

int isFull(struct Queue* q){
    return q->r == q->size-1;
}

int isEmpty(struct Queue* q){
    return q->r == q->f;
}

void Enqueue(struct Queue* q,int val){
    if(!isFull(q)){
        q->r++;
        q->arr[q->r] = val;
        printf("%d \t",val);
    }
    else{
        printf("\nQueue overflow");
    }
}

void Dequeue(struct Queue* q){
    if(!isEmpty(q)){
        q->f++;
        int a = q->arr[q->f];
        printf("%d \t",a);
    }
    else{
        printf("\nQueue is empty");
    }
}

int main(){
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->size=10;
    q->f = q->r = -1;
    q->arr = (int*)malloc(q->size * sizeof(int));

    //Enqueuing
    printf("Enqueued\n");
    Enqueue(q,5);
    Enqueue(q,15);
    Enqueue(q,50);
    Enqueue(q,25);
    Enqueue(q,35);
    Enqueue(q,85);

    //Dequeuing
    printf("\nDequeued\n");
    Dequeue(q);
    Dequeue(q);
}