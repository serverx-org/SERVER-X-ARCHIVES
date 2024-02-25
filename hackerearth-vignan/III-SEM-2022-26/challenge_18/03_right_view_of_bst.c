/*
              10
           /     \
          8       13
        /   \   /    \
       5    9  11    17
                      \
                      6



                2
             /    \
            1      3


*/

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

void rightSide(struct TreeNode *root, int level, int *levelCnt) {
    if (root == NULL) {
        return;
    }
    if (level > *levelCnt) {
        printf("%d ", root->data);
        *levelCnt = level;
    }
    rightSide(root->right, level + 1, levelCnt);
    rightSide(root->left, level + 1, levelCnt);
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
    int levelCnt = 0;
    rightSide(root, 1, &levelCnt);
    return 0;
}
