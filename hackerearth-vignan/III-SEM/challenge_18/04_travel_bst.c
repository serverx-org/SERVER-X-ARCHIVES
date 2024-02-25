// #define Main1
#define Main2

#ifdef Main1
#include <stdio.h>

void inorder(int arr[], int n, int root) {
    if (root < n && arr[root] != -1) {
        inorder(arr, n, 2 * root + 1);
        printf("%d ", arr[root]);
        inorder(arr, n, 2 * root + 2);
    }
}

void postorder(int arr[], int n, int root) {
    if (root < n && arr[root] != -1) {
        printf("%d ", arr[root]);
        postorder(arr, n, 2 * root + 1);
        postorder(arr, n, 2 * root + 2);
    }
}

void preorder(int arr[], int n, int root) {
    if (root < n && arr[root] != -1) {
        preorder(arr, n, 2 * root + 1);
        preorder(arr, n, 2 * root + 2);
        printf("%d ", arr[root]);
    }
};

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nInorder:");
    inorder(arr, n, 0);
    printf("\nPreorder:");
    preorder(arr, n, 0);
    printf("\nPostorder:");
    postorder(arr, n, 0);
    return 0;
}
#endif

#ifdef Main2
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
#endif