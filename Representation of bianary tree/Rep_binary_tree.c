#include<stdio.h>
#include<malloc.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node * createNode(int data) {
    struct node *n;  //creating the node point
    n = (struct node*) malloc(sizeof(struct node));  //Allocated the memory in the heap
    n->data = data;  //setting the data of the node
    n->left = NULL;  //setting the left and right child of the node to NULL
    n->right = NULL; //setting the left and right child of the node to NULL
    return 0;
}

int main () {

   /* //construct the root node
    struct node *p;
    p = (struct node*) malloc(sizeof(structnode));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    //construct the second node
    struct node *p1;
    p1 = (struct node*) malloc(sizeof(structnode));
    p1->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    //construct the third node
    struct node *p2;
    p2 = (struct node*) malloc(sizeof(structnode));
    p2->data = 4;
    p2->left = NULL;
    p2->right = NULL; */

    //constructing the root node- using function (Recommanded)
    struct node *p = createNode(2);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(4);

    //Linking the root node with the left and right child node
    p->left = p1;
    p->right = p2;
    return 0;
}