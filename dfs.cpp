#include <iostream>
using namespace std;

#define MAX 10

void DFS(int graph[MAX][MAX], int vertices, int current, bool visited[]) {
    visited[current] = true;

    cout << current << " ";

    for (int i = 0; i < vertices; i++) {
        if (graph[current][i] == 1 && !visited[i]) {
            DFS(graph, vertices, i, visited);
        }
    }
}

int main() {
    int vertices = 5;

    int graph[MAX][MAX] = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 1, 0},
        {1, 1, 0, 0, 1},
        {0, 1, 0, 0, 1},
        {0, 0, 1, 1, 0}
    };

    bool visited[MAX] = {false};

    cout << "DFS Traversal: ";

    DFS(graph, vertices, 0, visited);

    return 0;
}
