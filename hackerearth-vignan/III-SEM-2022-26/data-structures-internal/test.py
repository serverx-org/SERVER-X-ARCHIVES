def find_children(inorder, postorder, root):
    root_index = inorder.index(root)
    
    left_inorder = inorder[:root_index]
    right_inorder = inorder[root_index + 1:]
    
    left_postorder = postorder[:root_index]
    right_postorder = postorder[root_index:-1]
    
    left_child = left_postorder[-1] if left_postorder else -1
    right_child = right_postorder[-1] if right_postorder else -1
    
    return left_child, right_child

# Example usage:
inorder = list(map(int, input().split()))
postorder = list(map(int, input().split()))

root = postorder[-1]
left_child, right_child = find_children(inorder, postorder, root)

print(left_child, right_child, end=" ")
