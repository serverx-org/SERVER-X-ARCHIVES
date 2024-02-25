class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def create_node(data):
    newNode = Node(data)
    return newNode


def insert(root, item):
    if not root:
        return create_node(item)
    if item < root.data:
        root.left = insert(root.left, item)
    else:
        root.right = insert(root.right, item)
    return root


def inorder(root):
    if root:
        inorder(root.left)
        print(root.data)
        inorder(root.right)


def main():
    t = int(input())
    for _ in range(t):
        root = None
        nodes = list(map(int, input().split()))
        for item in nodes:
            root = insert(root, item)
        inorder(root)
        print()


if __name__ == "__main__":
    main()
