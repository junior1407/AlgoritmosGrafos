#include <bits/stdc++.h>
using namespace std;
#define inf 1e9
#define ii pair<int,int>
map<int, vector<ii>> graph;

vector<int> distances;
int vertices, edges;

void djikstra(int start_vertex){
    distances[start_vertex] = 0;
    priority_queue<ii, vector<ii>, greater<ii>> pq; 
    pq.push({0, start_vertex});
    int  u, v, w;
    while(!pq.empty()){
        u=pq.top().second;
        pq.pop();
        for (auto item:  graph[u]){
            v = item.first;
            w = item.second;
            if (distances[v] > distances[u] + w){
                distances[v] = distances[u] + w;
                pq.push({distances[v], v});
            }
        }
    }

}
int main(){

    scanf("%d %d",&vertices,&edges);
    int u,v,c;   // Vertex u -> v,  cost c
    for(int i = 0; i< edges; i++){  
        scanf("%d %d %d",&u,&v, &c);
        graph[u].push_back({v, c});
    }
    int start_vertex;
    scanf("%d", &start_vertex);
    distances.resize(vertices);
    for(int i = 0; i< vertices; i++){
        distances[i] = inf;;
    }
    djikstra(start_vertex);
    for (int i = 0; i < vertices; i++){ 
        printf("Distance from %d to %d = %d\n", start_vertex, i, distances[i]);
    }
    return 0;
}