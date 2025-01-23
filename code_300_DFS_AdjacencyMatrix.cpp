#include <iostream>
#include <vector>
using namespace std;

void DFS(int start, vector<vector<int>> &AdjMat, vector<bool> &visited, vector<int> &ans) {
    visited[start] = true;
    ans.push_back(start);

    for (int i = 0; i < AdjMat[start].size(); i++) {
        if (AdjMat[start][i] == 1 && !visited[i]) {
            DFS(i, AdjMat, visited, ans);
        }
    }
}

int main() {
    int V, E;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<int>> AdjMat(V, vector<int>(V, 0));
    for (int i = 0; i < E; i++) {
        cout << "Enter the edge (u v): ";
        int u, v;
        cin >> u >> v;

        AdjMat[u][v] = 1;
        AdjMat[v][u] = 1; // Since the graph is undirected
    }

    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << AdjMat[i][j] << " ";
        }
        cout << endl;
    }

    vector<int> ans;
    vector<bool> visited(V, false);
    int start = 0;

    DFS(start, AdjMat, visited, ans);

    cout << "DFS Traversal: ";
    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
