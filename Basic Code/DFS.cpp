#include <iostream>
using namespace std;

const int MAX = 100;
int graph[MAX][MAX]; // adjacency matrix
bool visited[MAX];

void dfs(int node, int n) {
    visited[node] = true;
    cout << "visited node: " << node << endl;

    for (int i = 1; i <= n; i++) {
        if (graph[node][i] == 1 && !visited[i]) {
            dfs(i, n);
        }
    }
}

int main() {
    int nodes, edges;
    cout << "enter number of nodes and edges: ";
    cin >> nodes >> edges;

    // initialize graph with 0
    for (int i = 0; i <= nodes; i++) {
        for (int j = 0; j <= nodes; j++) {
            graph[i][j] = 0;
        }
        visited[i] = false;
    }

    // input the edges
    cout << "enter the edges (u v):\n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1; // undirected graph
    }

    int start_node;
    cout << "enter start node for dfs: ";
    cin >> start_node;

    dfs(start_node, nodes);

    return 0;
}
