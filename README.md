# 💻 Data Structures & Algorithms with C

A practical repository for learning and implementing **Data Structures and Algorithms (DSA) using the C programming language**.

This repository contains implementations, practice programs, lab exercises, and algorithmic concepts covering fundamental and advanced data structures such as **arrays, linked lists, stacks, queues, trees, graphs, searching, sorting, and complexity analysis**.

It is designed for students who want to strengthen their **C programming, problem-solving, Data Structures, and Algorithms** skills.

---

# 📌 About the Project

**Data Structures and Algorithms (DSA)** are fundamental concepts in Computer Science used to organize data efficiently and solve computational problems.

This repository focuses on implementing DSA concepts using **C**, with practical programs that help understand how different data structures work internally.

### Main areas covered:

* 📦 Arrays
* 🔗 Linked Lists
* 📚 Stacks
* 🚶 Queues
* 🌳 Binary Trees
* 🌲 Binary Search Trees
* 🌿 AVL Trees
* 🕸️ Graphs
* 🔍 Searching Algorithms
* 🔄 Sorting Algorithms
* ⏱️ Time Complexity
* 🧩 Abstract Data Types
* 🧪 Lab & Experiment Programs

The repository currently contains dedicated folders for these topics and related practical exercises.

---

# 🚀 Topics Covered

## 1. 📦 Arrays

Arrays store multiple elements of the same data type in contiguous memory locations.

### Topics:

* Array creation
* Array traversal
* Insertion
* Deletion
* Searching
* Updating elements
* Array operations

Repository folder:

```text
Operations on an array
```

---

# 2. 🔗 Linked List

A linked list is a dynamic data structure where elements are connected using pointers.

### Types covered:

* Singly Linked List
* Doubly Linked List
* Circular Linked List

### Operations:

* Creation
* Traversal
* Insertion
* Deletion
* Searching

Repository folders include:

```text
Linked_list_creationandtraversal
Doubly link list
Circular linklist
```

---

# 3. 📚 Stack

A **Stack** follows the **LIFO (Last In, First Out)** principle.

### Basic operations:

* Push
* Pop
* Peek
* Display

Repository topics include:

```text
Stack
Stack implementation
peak operation on stack
infix To postfix in stack
parenthesis_checking
```

### Example

```text
        ┌─────┐
        │ 30  │ ← Top
        ├─────┤
        │ 20  │
        ├─────┤
        │ 10  │
        └─────┘
```

The last inserted element is removed first.

---

# 4. 🚶 Queue

A **Queue** follows the **FIFO (First In, First Out)** principle.

### Types covered:

* Simple Queue
* Circular Queue
* Double-Ended Queue (Deque)
* Queue using Linked List

Repository topics include:

```text
implementat queue
Implementation Queue using linklist
circular Queue
Implementation of Double - Ended Queue
```

### Example

```text
Front → [10] [20] [30] ← Rear
```

The first inserted element is removed first.

---

# 5. 🌳 Binary Tree

A binary tree is a tree data structure in which each node has at most two children.

The repository includes:

* Binary tree representation
* Binary tree traversal

Repository folders:

```text
Representation of bianary tree
Traversal of binary Tree
```

### Common Traversals

* Inorder
* Preorder
* Postorder

---

# 6. 🌲 Binary Search Tree

A **Binary Search Tree (BST)** is a binary tree where:

```text
Left Subtree < Root < Right Subtree
```

### Common operations:

* Insertion
* Searching
* Traversal
* Deletion

Repository folder:

```text
Binary Search Tree
```

---

# 7. 🌿 AVL Tree

An **AVL Tree** is a self-balancing Binary Search Tree.

The repository includes AVL Tree insertion and the four major rotation cases:

* LL Rotation
* RR Rotation
* LR Rotation
* RL Rotation

Repository folder:

```text
AVL Tree Insertion & Rotation (LL, RR, LR, RL)
```

AVL trees maintain balance to keep operations efficient.

---

# 8. 🕸️ Graph

A **Graph** consists of vertices and edges and is used to represent relationships between objects.

Repository folder:

```text
Graph
```

Graphs are commonly used in:

* Social networks
* Road networks
* Computer networks
* Maps
* Recommendation systems

---

# 9. 🔍 Searching Algorithms

Searching is used to find a particular element from a collection of data.

The repository contains:

```text
Linear vs Binary Search
```

### Linear Search

Checks elements one by one.

### Binary Search

Repeatedly divides a **sorted** dataset into smaller sections.

### Comparison

| Feature            | Linear Search   | Binary Search      |
| ------------------ | --------------- | ------------------ |
| Data requirement   | Can be unsorted | Must be sorted     |
| Approach           | Sequential      | Divide and conquer |
| Average complexity | O(n)            | O(log n)           |
| Implementation     | Simple          | More efficient     |

---

# 10. 🔄 Sorting Algorithms

Sorting arranges data in a specific order, such as ascending or descending.

Repository folder:

```text
Sortting
```

Sorting is important because many algorithms, including Binary Search, require or benefit from sorted data.

---

# 11. 🧩 Abstract Data Types

The repository contains an `ADTs` section for **Abstract Data Types**.

An ADT describes:

* What data is stored
* What operations can be performed

without specifying the internal implementation.

Examples:

* Stack ADT
* Queue ADT
* List ADT

---

# 12. ⏱️ Time Complexity

The repository contains a dedicated:

```text
Time Complexity
```

section.

Time complexity describes how the running time of an algorithm grows as the input size increases.

### Common complexities:

```text
O(1)        Constant
O(log n)    Logarithmic
O(n)        Linear
O(n log n)  Linearithmic
O(n²)       Quadratic
O(2ⁿ)       Exponential
```

Understanding time complexity helps choose efficient algorithms.

---

# 🧪 Lab & Experiment Work

The repository also contains practical academic material such as:

```text
Experiment question
Lab manual questions
```

These sections can be useful for:

* DSA laboratory preparation
* Practical examinations
* Programming practice
* Semester assignments
* Revision

---

# 📂 Repository Structure

The current repository contains the following major sections:

```text
DSA-with-C/
│
├── ADTs/
├── AVL Tree Insertion & Rotation (LL, RR, LR, RL)/
├── Binary Search Tree/
├── Circular linklist/
├── Doubly link list/
├── Experiment question/
├── Graph/
├── Implementation Queue using linklist/
├── Implementation of Double - Ended Queue/
├── Lab manual questions/
├── Linear vs Binary Search/
├── Linked_list_creationandtraversal/
├── Operations on an array/
├── Representation of bianary tree/
├── Sortting/
├── Stack implementation/
├── Stack/
├── Time Complexity/
├── Traversal of binary Tree/
├── circular Queue/
├── implementat queue/
├── infix To postfix in stack/
├── parenthesis_checking/
├── peak operation on stack/
│
├── practice.c
├── practice.exe
└── .gitattributes
```

This structure is based on the folders and files currently visible in your GitHub repository.

---

# 🛠️ Technologies Used

| Technology         | Purpose                             |
| ------------------ | ----------------------------------- |
| 💻 C               | Programming language                |
| 🧠 Data Structures | Efficient data organization         |
| ⚙️ Algorithms      | Problem solving                     |
| 🖥️ VS Code        | Development environment             |
| 🌐 Git & GitHub    | Version control and project hosting |

---

# ⚙️ Getting Started

## 1. Clone the Repository

```bash
git clone https://github.com/Monu-kumar-kushwaha/DSA-with-C.git
```

## 2. Navigate to the Project

```bash
cd DSA-with-C
```

## 3. Compile a C Program

Using GCC:

```bash
gcc program.c -o program
```

## 4. Run the Program

### Windows

```bash
program.exe
```

### Linux / macOS

```bash
./program
```

---

# 💻 Basic C Example

```c
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    printf("Array elements:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

---

# 🔄 DSA Learning Workflow

```text
C Programming
      ↓
Arrays
      ↓
Linked Lists
      ↓
Stacks & Queues
      ↓
Trees
      ↓
Graphs
      ↓
Searching
      ↓
Sorting
      ↓
Time Complexity
      ↓
Problem Solving
```

---

# 🎯 Learning Objectives

After completing this repository, you should be able to:

* Understand fundamental Data Structures
* Implement data structures using C
* Work with pointers
* Understand dynamic memory concepts
* Implement linked lists
* Implement stacks and queues
* Implement trees and BSTs
* Understand AVL tree rotations
* Work with graphs
* Implement searching algorithms
* Implement sorting algorithms
* Analyze algorithm complexity
* Improve problem-solving skills

---

# 🌍 Real-World Applications

Data Structures and Algorithms are used in almost every area of software development.

### Applications include:

* 🌐 Web Applications
* 🗄️ Database Systems
* 🔍 Search Engines
* 🗺️ Navigation Systems
* 📱 Mobile Applications
* 🤖 Artificial Intelligence
* 🧠 Machine Learning
* 🎮 Game Development
* 🔐 Cybersecurity
* 💻 Operating Systems
* 🌐 Computer Networks

### Example

A navigation application can represent locations as **vertices** and roads as **edges** in a graph.

```text
Location A
    │
    │
Location B ─── Location C
    │
    │
Location D
```

Graph algorithms can then be used to find efficient routes.

---

# 📈 Skills Demonstrated

This repository demonstrates practical knowledge of:

* C Programming
* Pointers
* Dynamic Data Structures
* Arrays
* Linked Lists
* Stacks
* Queues
* Trees
* BST
* AVL Trees
* Graphs
* Searching
* Sorting
* Algorithm Analysis
* Problem Solving

---

# 🔮 Future Improvements

Possible future additions include:

* [ ] More sorting algorithms
* [ ] More searching algorithms
* [ ] Heap and Priority Queue
* [ ] Hash Tables
* [ ] Graph BFS and DFS
* [ ] Shortest Path Algorithms
* [ ] Dijkstra's Algorithm
* [ ] Minimum Spanning Tree
* [ ] Dynamic Programming
* [ ] Recursion problems
* [ ] Backtracking
* [ ] More coding problems
* [ ] Algorithm complexity tables
* [ ] Interview-oriented DSA problems

---

# ⭐ Why This Repository?

This repository provides a **hands-on approach to learning DSA with C**.

Instead of studying Data Structures only theoretically, you can understand how they are actually implemented using C programming.

It is useful for:

* 🎓 College students
* 💻 C programming learners
* 🧠 DSA beginners
* 📝 Semester exam preparation
* 💼 Technical interview preparation
* 🏆 Competitive programming beginners

---

# 👨‍💻 Author

**Monu Kumar Kushwaha**

GitHub:
https://github.com/Monu-kumar-kushwaha

---

# ⭐ Support

If you find this repository useful, consider giving it a ⭐ on GitHub.

Your support helps encourage more programming and DSA projects.

---

## 📄 License

This repository is created primarily for **educational and learning purposes**.
