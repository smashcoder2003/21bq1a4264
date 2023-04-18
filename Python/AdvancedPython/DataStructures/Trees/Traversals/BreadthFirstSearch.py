from AdvancedPython.DataStructures.Trees.Node import Node


def breadthFirstSearch(root, count=0):
    if not count:
        print(root.val, end=' ')
    if root:
        if root.left:
            print(root.left.val, end=" ")
        if root.right:
            print(root.right.val, end=" ")
        breadthFirstSearch(root.left, count+1)
        breadthFirstSearch(root.right, count+1)


if __name__ == '__main__':
    root = Node(20)
    root.left = Node(8)
    root.right = Node(22)
    root.left.left = Node(4)
    root.left.right = Node(12)
    root.left.right.left = Node(10)
    root.left.right.right = Node(14)
    breadthFirstSearch(root)
