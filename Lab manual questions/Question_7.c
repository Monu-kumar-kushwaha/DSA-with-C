#include <stdio.h>
#include <stdlib.h>

// Structure for a BST Node
struct Node {
    int key;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int key) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->key = key;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a key into BST
struct Node* insert(struct Node* root, int key) {
    if (root == NULL) {
        return createNode(key);
    }
    if (key < root->key) {
        root->left = insert(root->left, key);
    } else if (key > root->key) {
        root->right = insert(root->right, key);
    }
    return root;
}

// Function to find the minimum key in BST
struct Node* findMin(struct Node* root) {
    if (root == NULL) {
        return NULL;
    }
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Function to perform in-order traversal (For verification)
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->key);
        inorderTraversal(root->right);
    }
}

// Main function
int main() {
    struct Node* root = NULL;
    int keys[] = {50, 30, 70, 20, 40, 60, 80}; // Given order of keys
    int n = sizeof(keys) / sizeof(keys[0]);

    // Insert keys into BST
    for (int i = 0; i < n; i++) {
        root = insert(root, keys[i]);
    }

    // Display the BST using in-order traversal
    printf("In-order Traversal of BST: ");
    inorderTraversal(root);
    printf("\n");

    // Find the minimum key
    struct Node* minNode = findMin(root);
    if (minNode) {
        printf("Minimum key in BST: %d\n", minNode->key);
    } else {
        printf("BST is empty\n");
    }

    return 0;
}
