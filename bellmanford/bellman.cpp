#include <bits/stdc++.h>

using namespace std;
#define lli long long int
#define inf 1e18
const int maxSize = 200 + 200 + 2 + 1;
lli matrixGraph[maxSize][maxSize];
vector<vector<int>> graph;
int n_vertices, n_edges, source;

void addEdge(int u, int v, int c) {
    graph[u].push_back(v);
    matrixGraph[u][v] = c;
}

void bellmannFord(int source) {
    lli cost[maxSize];
    int prev[maxSize];
    for (int i = 0; i < n_vertices; i++) {
        cost[i] = inf;
        prev[i] = -1;
    }
    cost[source] = 0;
    for (int i = 0; i < n_vertices; i++) {
        for (int u = 0; u < n_vertices; u++) {
            for (auto v: graph[u]) {
                int w = matrixGraph[u][v];
                if (cost[u] + w < cost[v]) {
                    cost[v] = cost[u] + w;
                    prev[v] = u;
                }
            }
        }
    }

    for (int i = 0; i < n_vertices; i++) {
        printf("Distance from %d to %d = %d\n", source, i, cost[i]);
    }
}

int main() {
    scanf("%d %d %d", &n_vertices, &n_edges, &source);
    graph.resize(n_vertices);
    int u, v, w;
    for (int i = 0; i < n_edges; i++) {
        scanf("%d %d %d", &u, &v, &w);
        addEdge(u, v, w);
    }
    bellmannFord(source);
    return 0;

}