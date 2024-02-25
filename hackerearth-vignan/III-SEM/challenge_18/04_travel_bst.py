class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def create_node(data):
    return Node(data)

def insert(root, data):
    if root is None:
        return create_node(data)

    if data < root.data:
        root.left = insert(root.left, data)
    elif data > root.data:
        root.right = insert(root.right, data)

    return root

def inorder(root):
    if root is not None:
        inorder(root.left)
        print(root.data, end=' ')
        inorder(root.right)

def postorder(root):
    if root is not None:
        postorder(root.left)
        postorder(root.right)
        print(root.data, end=' ')

def preorder(root):
    if root is not None:
        print(root.data, end=' ')
        preorder(root.left)
        preorder(root.right)

if __name__ == "__main__":
    input_list = list(map(int, input().split()))

    root = None

    for elem in input_list:
        root = insert(root, elem)

    print("Inorder:", end=' ')
    inorder(root)
    print()

    print("Preorder:", end=' ')
    preorder(root)
    print()

    print("Postorder:", end=' ')
    postorder(root)
    print()
