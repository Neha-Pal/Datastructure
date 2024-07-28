#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

void traverse(struct node* ptr){
    printf("Elements are - ");
    while(ptr!= NULL){
        printf("%d -> ",ptr->data);
        ptr = ptr -> next;
    }
}

struct node* delete_first(struct node*head){
    struct node *ptr = head;
    head = head -> next;
    free(ptr);
    return head;
}

int main(){
    struct node* head = (struct node *)malloc(sizeof(struct node));
    struct node* second = (struct node *)malloc(sizeof(struct node));
    struct node* third = (struct node *)malloc(sizeof(struct node));
    struct node* fourth = (struct node *)malloc(sizeof(struct node));
    struct node* fifth = (struct node *)malloc(sizeof(struct node));
    struct node* sixth = (struct node *)malloc(sizeof(struct node));

    head -> data = 11;
    head -> next = second;

    second -> data = 21;
    second -> next = third;

    third -> data = 212;
    third -> next = fourth;

    fourth -> data = 321;
    fourth -> next = fifth;

    fifth -> data = 121;
    fifth -> next = sixth;

    sixth -> data = 211;
    sixth -> next = NULL;

    printf("Linked List Before deletion - \n");
    traverse(head);

    head = delete_first(head);

    printf("\nLinked List After deletion - \n");
    traverse(head);

    return 0;
}