# <span style="color:#1AED59"> Q. **Mirror Image of Binary Tree**</span>

The program takes an integer 'n' followed by 'n' elements, representing a binary tree in array form. It then performs an inorder traversal and prints the tree's mirror image (flipped left and right subtrees) using recursion. The output consists of two lines: the original inorder traversal and the mirrored tree's inorder traversal.

## <span style="color:cyan"> **Logic Approach** </span>

1. Read the integer 'n' representing the number of elements in the binary tree array.
2. Read the 'n' elements into the array representing the binary tree.
3. Define a recursive `inorderTraversal` function to perform an inorder traversal of the original tree and print the elements.
4. Define a recursive `mirrorTree` function to print the mirrored tree's inorder traversal (flipped left and right subtrees).
5. The `mirrorTree` function swaps the order of recursive calls, starting with the right subtree before the left subtree.
6. Call the `inorderTraversal` function to print the original inorder traversal.
7. Call the `mirrorTree` function to print the mirrored tree's inorder traversal.
8. Output the two lines representing the original and mirrored tree traversals.
9. Continue until all 'n' elements are processed.

## <span style="color:#1AA1ED"> **Logic Implementation** </span>

```cpp
// Contest: Vignan Challenge 18 | 02 DEC | Binary Search Trees 
// PROBLEM: Mirror Image of Binary Tree
// AUTHOR: Gautam Ankoji

#include <stdio.h>

void inorderTraversal(int BT[], int n, int indx) {
    if (indx < n && BT[indx] != -1) {
        inorderTraversal(BT, n, 2 * indx + 1);
        printf("%d ", BT[indx]);
        inorderTraversal(BT, n, 2 * indx + 2);
    }
}

void mirrorTree(int BT[], int n, int indx) {
    if (indx < n && BT[indx] != -1) {
        mirrorTree(BT, n, 2 * indx + 2);
        printf("%d ", BT[indx]);
        mirrorTree(BT, n, 2 * indx + 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int BT[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &BT[i]);
    }
    inorderTraversal(BT, n, 0);
    printf("\n");
    mirrorTree(BT, n, 0);
    printf("\n");
    return 0;
}

```
