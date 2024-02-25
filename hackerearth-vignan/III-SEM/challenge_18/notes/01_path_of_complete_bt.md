# <span style="color:#1AED59"> Q. **Path of Complete Binary Tree**</span>

The program takes an integer 't' as the number of test cases, followed by 't' integers. For each integer, it converts the decimal number into its binary representation and prints the path from the root to the nth element, where 'L' represents a left child and 'R' represents a right child in a binary tree.

## <span style="color:cyan"> **Logic Approach** </span>

1. Read the number of test cases 't'.
2. For each test case, read the decimal number 'data'.
3. Calculate the number of bits required to represent 'data' in binary ('cnt').
4. Allocate memory for an array 'binaryTreeNode' to store the binary representation of 'data'.
5. Populate 'binaryTreeNode' by extracting binary digits from 'data'.
6. Print the path from the root to the nth element in the binary tree, where 'L' represents a left child and 'R' represents a right child.
7. Free the allocated memory for 'binaryTreeNode'.
8. Repeat the process for each test case.

## <span style="color:#1AA1ED"> **Logic Implementation** </span>

```cpp
// Contest: Vignan Challenge 18 | 02 DEC | Binary Search Trees 
// PROBLEM: Path of Complete Binary Tree
// AUTHOR: Gautam Ankoji

#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int data;
        scanf("%d", &data);
        int cnt = 0;
        int temp = data;
        while (temp > 0) {
            temp /= 2;
            cnt++;
        }
        int *binaryTreeNode = (int *)malloc(cnt * sizeof(int));
        int i = 0;
        while (data > 0) {
            binaryTreeNode[i++] = data % 2;
            data /= 2;
        }
        for (int k = i - 2; k >= 0; k--) {
            printf("%c", (binaryTreeNode[k] == 0) ? 'L' : 'R');
        }
        printf("\n");
        free(binaryTreeNode);
    }
    return 0;
}

```
