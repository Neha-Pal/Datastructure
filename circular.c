#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void traverse(struct node* head) {
    struct node* ptr = head;
    
    if (head != NULL) {
        do {
            printf("%d -> ", ptr->data);
            ptr = ptr->next;
        } while (ptr != head);
    }
    printf("\n");
}

struct node* insertFirst(struct node* head,int data){
    struct node*ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = data;

    struct node* p = head -> next;
    while(p -> next != head){
        p = p -> next;
    }
    p -> next = ptr;
    ptr -> next = head;
    head = ptr;
    return head;
}

int main() {
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    head->data = 3;
    head->next = second;

    second->data = 13;
    second->next = third;

    third->data = 32;
    third->next = fourth;

    fourth->data = 33;
    fourth->next = head;

    printf("Circular Linked List is - \n");
    traverse(head);

    head = insertFirst(head,56);

    printf("Circular Linked List After insertion - \n");
    traverse(head);

    return 0;
}
