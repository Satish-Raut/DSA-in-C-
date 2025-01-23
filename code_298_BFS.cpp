#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(const vector<vector<int>>& AdjList, vector<int>& ans) {
    queue<int> q;
    vector<bool> visited(AdjList.size(), false);

    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        ans.push_back(node);
        for (int i = 0; i < AdjList[node].size(); i++) {
            if (!visited[AdjList[node][i]]) {
                q.push(AdjList[node][i]);
                visited[AdjList[node][i]] = true;
            }
        }
    }
}

int main() {
    int V, E;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<int>> AdjList(V);

    for (int i = 0; i < E; i++) {
        cout << "Enter the edge between two vertices (u v): ";
        int u, v;
        cin >> u >> v;

        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }

    cout << "Adjacency List:\n";
    for (int i = 0; i < V; i++) {
        cout << i << " --> ";
        for (int neighbor : AdjList[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    vector<int> ans;
    BFS(AdjList, ans);

    cout << "BFS traversal: ";
    for (int node : ans) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
