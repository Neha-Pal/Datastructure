#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data= data;
    n->left= NULL;
    n->right = NULL;
    return n;
}

void inOrder(struct node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d\t",root->data);
        inOrder(root->right);
    }
}
/* tree --- 
     4
    / \
   1   6
  / \
 5   2

 In order -> 5-1-2-4-6
*/

int main(){
    struct node* p = createNode(4);
    struct node* p1 = createNode(1);
    struct node* p2 = createNode(6);
    struct node* p3 = createNode(5);
    struct node* p4 = createNode(2);
    
    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = p4;

    printf("In Order Traversal - \n");
    inOrder(p);
    return 0;
}