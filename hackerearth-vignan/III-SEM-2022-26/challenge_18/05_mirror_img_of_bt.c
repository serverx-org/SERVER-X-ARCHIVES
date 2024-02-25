// #define Main1
#define Main2

#ifdef Main1
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left, *right;
} Node;

Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node *insertNode(Node *root, int data) {
    if (!root)
        return createNode(data);
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

void inorder(Node *root) {
    if (!root)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void mirrorBT(Node *root) {
    if (!root)
        return;
    mirrorBT(root->right);
    printf("%d ", root->data);
    mirrorBT(root->left);
}

int main() {
    int n;
    scanf("%d", &n);
    Node *root = NULL;
    for (int i = 0; i < n; i++) {
        int data;
        scanf("%d", &data);
        root = insertNode(root, data);
    }
    inorder(root);
    printf("\n");
    mirrorBT(root);
    printf("\n");

    return 0;
}
#endif

#ifdef Main2
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

#endif