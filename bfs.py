from collections import deque

def bfs(graph, start_node):
    queue = deque([start_node])
    visited = set([start_node])
    result = []

    while queue:
        node = queue.popleft()
        result.append(node)

        for neighbour in graph[node]:
            if neighbour not in visited:
                visited.add(neighbour)
                queue.append(neighbour)

    return result
graph = {
    1: [2, 3],
    2: [4, 5],
    3: [6],
    4: [],
    5: [6],
    6: []
}

bfs_result = bfs(graph,1)
print("BFS traversal:",bfs_result)