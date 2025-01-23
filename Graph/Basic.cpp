#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter the number of nodes and edges: " << endl;
    cin >> n >> m;

    vector<int> *adj = new vector<int>[n]; 
    int u, v;

    cout << "Enter the edges (u, v): " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;

        adj[u].push_back(v); 
        adj[v].push_back(u);
    }

    cout << "Adjacency List:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << "-> ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
