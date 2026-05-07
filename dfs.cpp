#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[100];
bool visited[100];

// DFS function
void dfs(int node) {
    visited[node] = true;
    cout << node << " ";

    for (int i = 0; i < adj[node].size(); i++) {
        int next = adj[node][i];
        if (!visited[next]) {
            dfs(next);
        }
    }
}

int main() {
    int n, e;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> e;

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // remove this line for directed graph
    }

    dfs(0); // start from node 0

    return 0;
}
