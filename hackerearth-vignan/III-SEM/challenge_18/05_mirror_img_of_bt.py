class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def create_node(data):
    new_node = Node(data)
    return new_node

def insert(root, data):
    if not root:
        return create_node(data)
    if data < root.data:
        root.left = insert(root.left, data)
    else:
        root.right = insert(root.right, data)
    return root

def inorder(root):
    if root:
        inorder(root.left)
        print(root.data, end=" ")
        inorder(root.right)

def mirror_bt(root):
    if root:
        mirror_bt(root.right)
        print(root.data, end=" ")
        mirror_bt(root.left)

def main():
    n = int(input())
    root = None
    data = list(map(int, input().split()))

    for i in range(n):
        root = insert(root, data[i])

    inorder(root)
    print()
    mirror_bt(root)
    print()

if __name__ == "__main__":
    main()


# 8 4 2 1
    