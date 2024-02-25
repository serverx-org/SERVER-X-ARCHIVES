# <span style="color:#1AED59"> Q. **Right View of Binary Search Tree**</span>

The program constructs a binary search tree (BST) by reading an integer 'n' and 'n' integers. It then prints the rightmost elements at each level of the BST, providing a right-side view of the tree. The construction and traversal are implemented iteratively.

## <span style="color:cyan"> **Logic Approach** </span>

1. Read the integer 'n' representing the number of nodes in the binary search tree (BST).
2. Initialize a NULL root pointer for the BST.
3. For each input integer, insert it into the BST by iteratively traversing the tree until the correct position is found.
4. During insertion, compare the value with the current node's value and move left or right accordingly.
5. Print the rightmost elements at each level of the BST by performing a right-side view traversal using the `rightSide` function.
6. The `rightSide` function keeps track of the maximum level encountered during traversal, ensuring only the rightmost element at each level is printed.
7. Continue until all 'n' elements are processed.
8. Free the memory allocated for the nodes in the BST.
9. The final right-side view of the BST is printed.

## <span style="color:#1AA1ED"> **Logic Implementation** </span>

```cpp
// Contest: Vignan Challenge 18 | 02 DEC | Binary Search Trees 
// PROBLEM: Right View of Binary Search Tree
// AUTHOR: Gautam Ankoji

#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode *left, *right;
};

struct TreeNode *createNode(int val) {
    struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    newNode->data = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void rightSide(struct TreeNode *root, int level, int *maxlevel) {
    if (root == NULL) {
        return;
    }
    if (level > *maxlevel) {
        printf("%d ", root->data);
        *maxlevel = level;
    }
    rightSide(root->right, level + 1, maxlevel);
    rightSide(root->left, level + 1, maxlevel);
}

int main() {
    int n;
    scanf("%d", &n);
    struct TreeNode *root = NULL;
    for (int i = 0; i < n; i++) {
        int data;
        scanf("%d", &data);
        if (root == NULL) {
            root = createNode(data);
        } else {
            struct TreeNode *current = root;
            struct TreeNode *parent = NULL;
            while (current != NULL) {
                parent = current;
                if (data < current->data) {
                    current = current->left;
                } else {
                    current = current->right;
                }
            }
            if (data < parent->data) {
                parent->left = createNode(data);
            } else {
                parent->right = createNode(data);
            }
        }
    }
    int maxlevel = 0;
    rightSide(root, 1, &maxlevel);
    return 0;
}


```
