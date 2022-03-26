def sol(vertex_sorted, edges_sorted):
    overall_sum = 0
    for first, second in zip(vertex_sorted, edges_sorted):
        overall_sum += first * second
    return overall_sum


vertex = int(input())
edges = int(input())
overall_graph = {}
for first in range(edges):
    uu, vv = map(int, input().split())
    overall_graph[uu] = overall_graph.get(uu, 0) + 1
    overall_graph[vv] = overall_graph.get(vv, 0) + 1
vertex_sorted = sorted(list(map(int, input().split())))[::-1]
edges_sorted = sorted([v for v in overall_graph.values()])[::-1]

print(sol(vertex_sorted, edges_sorted), end='')
