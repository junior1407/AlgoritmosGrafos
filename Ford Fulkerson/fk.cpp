#include <bits/stdc++.h>
using namespace std;
const int maxVertices = 1 + 50*100 + 50*100 + 1;
int n;
#define pii pair<int,int>

struct Edge { int to, from, flow; };
vector<Edge> graph[maxVertices];
int previous[maxVertices];

void addEdge(int u, int v, int f)
{
    graph[u].push_back({v, (int) graph[v].size(), f});
    graph[v].push_back({u, (int) graph[u].size()-1, 0});
}

bool BFS(int source, int target)
{
    queue<int> q;
    vector<int> visited(target + 1);
    q.push(source);
    visited[source] = 1;
    int u, v, f;
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        if (u == target)
        {
            return true;
        }
        for (auto &e: graph[u])
        {
            v = e.to;
            f = e.flow;
            if (f > 0)
            {
                if (visited[v] != 1)
                {
                    previous[v] = e.from;
                    visited[v] = 1;
                    q.push(v);
                }
            }
        }
    }
    return false;
}

int fk(int source, int target)
{
    int maxFlow = 0;
    while (BFS(source, target))
    {
        maxFlow++;
        int v, pos, u;
        v = target;
        while (v != source)
        {
            pos = previous[v];
            auto& e = graph[v][pos];
            u = e.to;
            auto &back = graph[u][e.from];
            back.flow -= 1;
            e.flow += 1;
            v = u;
        }
    }
    return maxFlow;
}



int main()
{

    int n_vertices, n_edges, source, target;
    scanf("%d %d %d %d", &n_vertices, &n_edges, &source, &target);
    int u, v, w;
    for (int i = 0; i< n_edges; i++) {
        scanf("%d %d %d", &u, &v, &w);
        addEdge(u, v, w);
    }
    printf("Max flow from %d to %d = %d\n", source, target, fk(source, target));
    
    return 0;
}