"""
Breadth first search is used to find the most optimal solution
There are two variants of breadth first solution
1. BFS to find the if the goal state exists
2. BFS to find the optimal path to the goal state
"""


class Node:
    def __init__(self, data=None, left=None, right=None):
        self.data = data
        self.right = right
        self.left = left


def BFS(root: Node) -> None:
    if not root:
        return

    print(root.data, end=" ")
    BFS(root.left)
    BFS(root.right)


if __name__ == '__main__':
    A = Node('A')
    B = Node('B')
    C = Node('C')
    D = Node('D')
    E = Node('E')
    A.left = B
    A.right = C
    B.left = D
    C.right = E
    BFS(A)