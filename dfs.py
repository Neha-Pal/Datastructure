def dfs(graph, node, visited, result):
    visited.add(node)
    result.append(node)

    for neighbour in graph[node]:
        if neighbour not in visited:
            dfs(graph, neighbour, visited, result)

graph = {
    1: [2, 3],
    2: [4, 5],
    3: [6],
    4: [],
    5: [6],
    6: []
}

visited = set()
result = []

# Perform DFS starting from node 1
dfs(graph, 1, visited, result)
print("DFS Recursive Traversal:", result)