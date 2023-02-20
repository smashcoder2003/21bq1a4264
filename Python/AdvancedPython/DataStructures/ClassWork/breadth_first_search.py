from collections import defaultdict


class Graph:
    def __init__(self):
        self.graph = defaultdict(list)

    def addedge(self, u, v):
        self.graph[u].append(v)

    def bfs(self, s):
        print("self.graph: ", self.graph)
        visited = [False] * (len(self.graph))
        queue = [s]
        visited[s] = True
        while queue:
            s = queue.pop(0)
            print(s, end=" ")
            for i in self.graph[s]:
                if not visited[i]:
                    queue.append(i)
                    visited[i] = True



g = Graph()
g.addedge(0, 1)
g.addedge(0, 2)
g.addedge(1, 2)
g.addedge(2, 0)
g.addedge(2, 3)
g.addedge(3, 3)

print("Following is Breadth First Traversal"
      " (starting from vertex 2)")
g.bfs(2)

# This code is contributed by Neelam Yadav
