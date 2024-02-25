# <span style="color:#1AED59"> Q. **Binary Search Tree**</span>

The program reads an integer 't' representing the number of test cases. For each case, it constructs a binary search tree (BST) by inserting integers until a newline character is encountered. After each insertion, it performs an inorder traversal of the BST and prints the elements in ascending order.

## <span style="color:cyan"> **Logic Approach** </span>

1. Read the number of test cases 't'.
2. For each test case, initialize a NULL root pointer for the binary search tree (BST).
3. Read integers until a newline character is encountered, and insert each integer into the BST using the `insertNode` function.
4. After each insertion, perform an inorder traversal (`inorderTraverse`) of the BST to print the elements in ascending order.
5. Repeat the process for each test case.
6. Free the memory allocated for the nodes in the BST after each test case.
7. Continue until all test cases are processed.

## <span style="color:#1AA1ED"> **Logic Implementation** </span>

```cpp
// Contest: Vignan Challenge 18 | 02 DEC | Binary Search Trees 
// PROBLEM: Binary Search Tree
// AUTHOR: Gautam Ankoji

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left, *right;
} Node;

Node *createNode(int data) {
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node *insertNode(Node *root, int val) {
    if (!root)
        return createNode(val);
    (val < root->data) ? (root->left = insertNode(root->left, val)) : (root->right = insertNode(root->right, val));
    return root;
}

void inorderTraverse(Node *root) {
    if (root) {
        inorderTraverse(root->left);
        printf("%d\n", root->data);
        inorderTraverse(root->right);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        Node *root = NULL;
        int val;
        while (scanf("%d", &val) != EOF) {
            root = insertNode(root, val);
            if (getchar() == '\n')
                break;
        }
        inorderTraverse(root);
        printf("\n");
    }
    return 0;
}


```
