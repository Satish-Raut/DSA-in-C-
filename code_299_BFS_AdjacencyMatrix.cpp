#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(vector<vector<int>>& AdjMatrix, vector<int>& ans) {
    int n = AdjMatrix.size();
    vector<bool> visited(n, false);
    queue<int> q;

    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        ans.push_back(node);

        for (int i = 0; i < n; i++) {
            if (AdjMatrix[node][i] == 1 && !visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    int V, E;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<int>> AdjMatrix(V, vector<int>(V, 0));

    cout << "Enter the edges (u v):\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;

        // Set the adjacency matrix
        AdjMatrix[u][v] = 1;
        AdjMatrix[v][u] = 1; // For undirected graph
    }

    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << AdjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    vector<int> ans;
    BFS(AdjMatrix, ans);

    cout << "BFS traversal: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
