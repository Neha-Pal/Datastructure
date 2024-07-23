#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

void traverse(struct node* ptr){
    printf("Elementd are : \n");
    while(ptr != NULL){
        printf("%d -> ",ptr->data);
        ptr = ptr -> next;
    }
}

struct node* insert_first(struct node* head,int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> next = head;
    ptr -> data = data;
    return ptr;
}

int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));
    struct node* fourth  = (struct node*)malloc(sizeof(struct node));
    
    head -> data = 25;
    head -> next = second;

    second -> data = 35;
    second -> next = third;

    third -> data = 65;
    third -> next = fourth;

    fourth -> data = 45;
    fourth -> next = NULL;

    traverse(head);
    head = insert_first(head,56);
    printf("\nAfter inserting at the first index--\n");
    traverse(head);
    return 0;

}