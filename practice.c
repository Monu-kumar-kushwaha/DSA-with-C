#include<stdio.h>
#include<malloc.h>

struct node {
    int data;
    struct node *left;
    struct node *right;

};

struct node *createnode(int data) {
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

//preorder traversal 
void preorder (struct node * root) {
    if(root != NULL) {
        printf("%d", root->data);
        preorder(root-> left);
        preorder(root->right);
    }
}

//Inorder traversal
void Inorder (struct node *root) {
    if(root != NULL) {
        Inorder(root->left);
        printf("%d", root->data);
        Inorder(root->right);
    }
}

//postorder traversal
void postorder (struct node *root ) {
    if(root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d", root->data);
    }
}

int main() {
    struct node *p = createnode(6);
    struct node *p1 = createnode(5);
    struct node *p2 = createnode(1);
    struct node *p3 = createnode(4);
    struct node *p4 = createnode(3);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("preorder traversal: ");
    printf(p);
    printf("\n");

    printf("Inorder traversal: ");
    printf(p);
    printf("\n");

    printf("postorder traversal: ");
    printf(p);
    printf("\n");

    return 0;

}