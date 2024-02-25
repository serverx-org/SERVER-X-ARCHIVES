# <span style="color:#1AED59"> Q. **Travel Binary Search Tree**</span>

This C program implements a binary search tree (BST) data structure. It takes an integer input 'n', reads 'n' elements, and builds a BST. Then, it prints the elements in inorder, preorder, and postorder traversal orders.

## <span style="color:cyan"> **Logic Approach** </span>

1. Define a structure for a binary tree node with data, left, and right pointers.
2. Implement a function `createNode` to create a new node with given data.
3. Implement a recursive `insert` function to insert elements into the binary search tree based on their values.
4. Implement three recursive traversal functions (`inorder`, `preorder`, `postorder`) to print the elements in different orders.
5. In the `main` function, read the number of elements (n) and insert each element into the binary search tree.
6. Print the elements of the tree using inorder, preorder, and postorder traversal.

## <span style="color:#1AA1ED"> **Logic Implementation** </span>

```cpp
// Contest: Vignan Challenge 18 | 02 DEC | Binary Search Trees 
// PROBLEM: Travel Binary Search Tree
// AUTHOR: Gautam Ankoji

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node *insert(struct Node *root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

void inorder(struct Node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void postorder(struct Node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        postorder(root->left);
        postorder(root->right);
    }
}

void preorder(struct Node *root) {
    if (root != NULL) {
        preorder(root->left);
        preorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    struct Node *root = NULL;
    for (int i = 0; i < n; i++) {
        int elem;
        scanf("%d", &elem);
        root = insert(root, elem);
    }
    printf("Inorder:");
    inorder(root);
    printf("\n");

    printf("Preorder:");
    preorder(root);
    printf("\n");

    printf("Postorder:");
    postorder(root);
    printf("\n");

    return 0;
}

```
