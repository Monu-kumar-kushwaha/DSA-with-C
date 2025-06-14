#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};

// Get the height of a node
int getHeight(struct Node *n) {
    if (n == NULL)
        return 0;
    return n->height;
}

// Create a new node
struct Node *createNode(int key) {
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->key = key;
    n->left = NULL;
    n->right = NULL;
    n->height = 1; // New nodes are created with height 1
    return n;
}

// Max function
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Get balance factor
int getBalanceFactor(struct Node *n) {
    if (n == NULL)
        return 0;
    return getHeight(n->left) - getHeight(n->right);
}

// Right Rotate
struct Node *rightRotate(struct Node *y) {
    struct Node *x = y->left;
    struct Node *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x; // New root
}

// Left Rotate
struct Node *leftRotate(struct Node *x) {
    struct Node *y = x->right;
    struct Node *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y; // New root
}

// Insert a node in the AVL tree
struct Node *insert(struct Node *n, int key) {
    if (n == NULL)
        return createNode(key);

    // Perform standard BST insertion
    if (key < n->key)
        n->left = insert(n->left, key);
    else if (key > n->key)
        n->right = insert(n->right, key);
    else
        return n; // No duplicates in AVL Tree

    // Update height of this ancestor node
    n->height = 1 + max(getHeight(n->left), getHeight(n->right));

    // Get balance factor
    int bf = getBalanceFactor(n);

    // Left Left Case (Right Rotation)
    if (bf > 1 && key < n->left->key)
        return rightRotate(n);

    // Right Right Case (Left Rotation)
    if (bf < -1 && key > n->right->key)
        return leftRotate(n);

    // Left Right Case (Left Rotate, then Right Rotate)
    if (bf > 1 && key > n->left->key) {
        n->left = leftRotate(n->left);
        return rightRotate(n);
    }

    // Right Left Case (Right Rotate, then Left Rotate)
    if (bf < -1 && key < n->right->key) {
        n->right = rightRotate(n->right);
        return leftRotate(n);
    }

    return n; // Return the (unchanged) node pointer
}

// Preorder traversal of the AVL tree
void preorder(struct Node *root) {
    if (root != NULL) {
        printf("%d ", root->key);
        preorder(root->left);
        preorder(root->right);
    }
}

int main() {
    struct Node *root = NULL;

    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);

    printf("Preorder Traversal of AVL Tree:\n");
    preorder(root);
    printf("\n");
    
    return 0;
}
