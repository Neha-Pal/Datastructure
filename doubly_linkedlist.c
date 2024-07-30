#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};
void traverse(struct node* head) {
    struct node* ptr = head;
    printf("Elements are - ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

struct node* insertAtBeginning(struct node* head, int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = head;
    newNode->prev = NULL;
    
    if (head != NULL) {
        (head)->prev = newNode;
    }
    
    return newNode;
}
int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;
    struct node*fifth;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));

    head -> data = 4;
    head -> next = second;
    head ->prev = NULL;

    second -> data = 41;
    second -> next = third;
    second ->prev = head;

    third -> data = 114;
    third -> next = fourth;
    third ->prev = second;

    fourth -> data = 40;
    fourth -> next = fifth;
    fourth ->prev = third;

    fifth -> data = 54;
    fifth -> next = NULL;
    fifth ->prev = fourth;

    printf("Doubly linkedlist - \n");
    traverse(head);

    printf("Doubly linkedlist.....after insertion - \n");
    head = insertAtBeginning(head,56);
    traverse(head);
}