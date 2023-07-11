from breadthfirstsearch import Node
from queue import LifoQueue


def dfs(root: Node, Goal: Node) -> None:
    open = [root]
    closed = [root.data]
    if root is None or root is Goal:
        return root.data

    while open:
        popped = open.pop(0)

        if popped.left:
            if popped.left is Goal:
                closed.apppend(Goal.data)
                return closed
            else:
                closed.append(popped.left.data)
                open.append(popped.left)

        if popped.right:
            if popped.right is Goal:
                closed.append(Goal.data)
                return closed
            else:
                open.append(popped.right)
                closed.append(popped.right.data)




if __name__ == '__main__':
    A = Node('A')
    B = Node('B')
    C = Node('C')
    D = Node('D')
    E = Node('E')
    F = Node('F')
    A.left = B
    A.right = C
    B.left = D
    C.right = E
    B.right = F
    print(dfs(A, E))
