#include<stdio.h>
#include<stdlib.h>

struct circularQueue{

    int size;
    int f;
    int r;
    int* arr;
};

int isFull(struct circularQueue* q){
    return ((q->r+1) % q->size) == q->f;
}
void enqueue(struct circularQueue* q,int val){
    if(!isFull(q)){
        q->r = (q-> r+1) % q-> size;
        q->arr[q->r] = val;
        printf("%d\t",val);
    }
    else{
        printf("Queue overflow");
    }
}


int isEmpty(struct circularQueue* q){
    return q->f == q->r;
}
void dequeue(struct circularQueue* q){
    if(!isEmpty(q)){
        q->f = (q->f+1) % q -> size;
        int a = q->arr[q->f];
        printf("%d\t",a);
    }
    else{
        printf("Queue is Empty");
    }
}

int main(){
    struct circularQueue* q = (struct circularQueue*)malloc(sizeof(struct circularQueue));
    
    q->size = 8;
    q->f = q->r = -1;
    q->arr = (int*)malloc(q->size * (sizeof(int)));

    //Enqueuing
    printf("Enqueued - \n");
    enqueue(q,12);
    enqueue(q,10);
    enqueue(q,13);
    enqueue(q,15);
    enqueue(q,120);
    enqueue(q,112);
    //Dequeuing
    printf("\nDequeued - \n");
    dequeue(q);
    dequeue(q);
    dequeue(q);

}