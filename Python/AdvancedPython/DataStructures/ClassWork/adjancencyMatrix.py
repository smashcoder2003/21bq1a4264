graph = {}


def add_edge(v1, v2, cost):
    if v1 not in graph:
        print(v1, "is not present in graph:")
    elif v2 not in graph:
        print(v2, "is not present in graph.")
    else:
        list1 = [v2, cost]
        list2 = [v1, cost]
    graph[v1].append(list1)
    graph[v2].append(list2)


def add_node(v):
    if v in graph:
        print(v, " is already present in graph")
    else:
        graph[v] = []
2

add_node('A')
add_node('B')
add_node('C')
add_edge('A', 'B', 10)
add_edge('A', 'C', 15)
print(graph)

