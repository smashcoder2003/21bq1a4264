from AdvancedPython.DataStructures.Trees.Node import Node


def Inorder(root: Node):
    if root:
        Inorder(root.left)
        print(root.val, end=" ")
        Inorder(root.right)


def Preorder(root: Node):
    if root:
        print(root.val, end=' ')
        Preorder(root.left)
        Preorder(root.right)


def Postorder(root: Node):
    if root:
        Postorder(root.left)
        Postorder(root.right)
        print(root.val, end=" ")


if __name__ == "__main__":
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)
    # Inorder(root)
    # Preorder(root)
    Postorder(root)
