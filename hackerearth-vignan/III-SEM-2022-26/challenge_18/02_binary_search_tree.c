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
