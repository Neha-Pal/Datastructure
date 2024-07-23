#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void traversal(struct node* ptr){
    printf("Elements are : ");
    while(ptr != NULL){
        printf("%d -> ",ptr -> data);
        ptr = ptr -> next;
    }
}

int main(){
    struct node* head;
    struct node* second;
    struct node* third;
    //allocate memory in the linked list in heap
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    //link nodes
    head -> data = 56;
    head -> next = second;

    second -> data = 100;
    second -> next = third;

    third -> data = 200;
    third -> next =NULL;

    traversal(head);
    return 0;

}