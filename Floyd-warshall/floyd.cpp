#include <bits/stdc++.h>
using namespace std;
#define inf 1e9
#define MAX_VERTICES (int) 1e5

vector<vector<long long int>> distances(MAX_VERTICES);
map<int, map<int, int>> graph;

void prepareDistances(int n_vertices){
    distances.resize(n_vertices);
    for(int i = 0 ; i< n_vertices; i++){
        distances[i].resize(n_vertices);
        for(int j = 0 ; j < n_vertices; j++){
            distances[i][j] = inf;
            if (i == j){
                distances[i][j] = 0;
            }else{
                if (graph.find(i) != graph.end()){
                    if (graph[i].find(j) != graph[i].end()){
                        distances[i][j] = graph[i][j];
                    }
                }
            }
        }
    }
}
void floyd(int n_vertices){

    prepareDistances(n_vertices);
    for(int k = 0; k< n_vertices; k++){
        for(int i = 0; i< n_vertices; i++){
            for(int j = 0; j< n_vertices; j++){
                if (distances[i][j] > distances[i][k] + distances[k][j]){
                    distances[i][j] = distances[i][k] + distances[k][j];
                }
            }

        }
    }

}

int main(){
    int n_vertices, n_edges;
    scanf("%d %d",&n_vertices, &n_edges);
    int u, v, w;
    while(n_edges --){
        scanf("%d %d %d",&u,&v,&w);
        if (graph.find(u) != graph.end()){
            if (graph[u].find(v) != graph[u].end()){
                graph[u][v] = min(graph[u][v], w);
            }
            else{
                graph[u][v] = w;
            }
        }
        else{
            graph[u][v] = w;
        }
    }
    floyd(n_vertices);
    for (int i = 0; i < n_vertices; i++) {
        for (int j = 0; j < n_vertices; j++) {
            printf("Minimum Distance from %d to %d = %d\n", i, j, distances[i][j]);
        } 
    }
        
    return 0;

}