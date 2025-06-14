// #include <stdio.h>
// #include <stdlib.h>

// #define TABLE_SIZE 10  // Size of hash table

// // Structure for a node in the linked list (for separate chaining)
// struct Node {
//     int key;
//     struct Node* next;
// };

// // Hash table array of linked list heads
// struct Node* hashTable[TABLE_SIZE];

// // Function to create a new node
// struct Node* createNode(int key) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->key = key;
//     newNode->next = NULL;
//     return newNode;
// }

// // Hash function (modular hashing)
// int hashFunction(int key) {
//     return key % TABLE_SIZE;
// }

// // Insert a key into the hash table
// void insert(int key) {
//     int index = hashFunction(key);
//     struct Node* newNode = createNode(key);
    
//     // Insert at head (separate chaining)
//     newNode->next = hashTable[index];
//     hashTable[index] = newNode;
    
//     printf("Inserted %d at index %d\n", key, index);
// }

// // Search for a key in the hash table
// int search(int key) {
//     int index = hashFunction(key);
//     struct Node* temp = hashTable[index];
    
//     while (temp != NULL) {
//         if (temp->key == key) {
//             printf("Key %d found at index %d\n", key, index);
//             return 1; // Found
//         }
//         temp = temp->next;
//     }
    
//     printf("Key %d not found\n", key);
//     return 0; // Not found
// }

// // Delete a key from the hash table
// void deleteKey(int key) {
//     int index = hashFunction(key);
//     struct Node* temp = hashTable[index];
//     struct Node* prev = NULL;

//     while (temp != NULL && temp->key != key) {
//         prev = temp;
//         temp = temp->next;
//     }

//     if (temp == NULL) {
//         printf("Key %d not found for deletion\n", key);
//         return;
//     }

//     if (prev == NULL) {
//         hashTable[index] = temp->next;
//     } else {
//         prev->next = temp->next;
//     }

//     free(temp);
//     printf("Key %d deleted from index %d\n", key, index);
// }

// // Display the hash table
// void display() {
//     for (int i = 0; i < TABLE_SIZE; i++) {
//         printf("Index %d:", i);
//         struct Node* temp = hashTable[i];
        
//         while (temp) {
//             printf(" -> %d", temp->key);
//             temp = temp->next;
//         }
//         printf("\n");
//     }
// }

// // Main function
// int main() {
//     // Initialize hash table
//     for (int i = 0; i < TABLE_SIZE; i++)
//         hashTable[i] = NULL;

//     // Insert some values
//     insert(10);
//     insert(20);
//     insert(30);
//     insert(25);
//     insert(35);
//     insert(15);
//     insert(50);

//     printf("\nHash Table after insertion:\n");
//     display();

//     // Search keys
//     search(25);
//     search(40);

//     // Delete a key
//     deleteKey(20);

//     printf("\nHash Table after deletion:\n");
//     display();

//     return 0;
// }




// open addressing method


#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 10  // Size of hash table
#define EMPTY -1       // Marker for empty slots
#define DELETED -2     // Marker for deleted slots

// Hash table array
int hashTable[TABLE_SIZE];

// Hash function (modular hashing)
int hashFunction(int key) {
    return key % TABLE_SIZE;
}

// Insert a key using linear probing
void insert(int key) {
    int index = hashFunction(key);
    int originalIndex = index;
    
    // Find an empty or deleted slot
    while (hashTable[index] != EMPTY && hashTable[index] != DELETED) {
        index = (index + 1) % TABLE_SIZE;
        if (index == originalIndex) {
            printf("Hash table is full! Cannot insert %d\n", key);
            return;
        }
    }
    
    hashTable[index] = key;
    printf("Inserted %d at index %d\n", key, index);
}

// Search for a key in the hash table
int search(int key) {
    int index = hashFunction(key);
    int originalIndex = index;

    while (hashTable[index] != EMPTY) {
        if (hashTable[index] == key) {
            printf("Key %d found at index %d\n", key, index);
            return index;  // Key found
        }
        index = (index + 1) % TABLE_SIZE;
        if (index == originalIndex)
            break;
    }

    printf("Key %d not found\n", key);
    return -1; // Key not found
}

// Delete a key from the hash table
void deleteKey(int key) {
    int index = search(key);
    if (index != -1) {
        hashTable[index] = DELETED;
        printf("Key %d deleted from index %d\n", key, index);
    }
}

// Display the hash table
void display() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (hashTable[i] == EMPTY)
            printf("Index %d: EMPTY\n", i);
        else if (hashTable[i] == DELETED)
            printf("Index %d: DELETED\n", i);
        else
            printf("Index %d: %d\n", i, hashTable[i]);
    }
}

// Main function
int main() {
    // Initialize hash table with EMPTY values
    for (int i = 0; i < TABLE_SIZE; i++)
        hashTable[i] = EMPTY;

    // Insert some values
    insert(10);
    insert(20);
    insert(30);
    insert(25);
    insert(35);
    insert(15);
    insert(50);

    printf("\nHash Table after insertion:\n");
    display();

    // Search keys
    search(25);
    search(40);

    // Delete a key
    deleteKey(20);

    printf("\nHash Table after deletion:\n");
    display();

    return 0;
}
