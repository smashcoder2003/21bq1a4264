from breadthfirstsearch import Node
from queue import LifoQueue


def dfs(root: Node, Goal: Node):
    open = LifoQueue()
    open.put(root)
    closed = []
    found = False

    while open and not found:
        popped = open.get()

        if popped == Goal:
            closed.append(popped)
            found = True

            while closed:
                print((closed.pop()).data)

        if popped.left:
            open.put(popped.left)
        if popped.right:
            open.put(popped.right)

        closed.append(popped)


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
    dfs(A, E)
