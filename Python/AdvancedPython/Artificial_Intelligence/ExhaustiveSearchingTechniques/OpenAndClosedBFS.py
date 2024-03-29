from breadthfirstsearch import Node
from queue import Queue


"""
1. Optimal BFS uses and open and closed list to maintain
the list of nodes which are visited and unvisited.
2. Nodes if no children and visited -> list[Closed]
3. Nodes if children and not visited -> list[Open]
"""


def optimalBFS(root: Node, Goal: Node) -> list[Node]:
    open = Queue(-1)
    open.put(root)
    closed = list()
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
    optimalBFS(A, E)
