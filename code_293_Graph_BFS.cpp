

#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int adj[MAX][MAX], start;
vector<bool> visited(MAX, 0);
int Node, Edge;

void BFS(int start) {
    queue<int> q;
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int nodedata = q.front();
        q.pop();
        cout << nodedata << " ";

        for (int i = 0; i < Node; i++) 
        {
            if (adj[nodedata][i] == 1 && !visited[i]) 
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    cout << "Enter the number of nodes and edges: ";
    cin >> Node >> Edge;

    for (int i = 0; i < Node; i++) 
    {
        for (int j = 0; j < Node; j++) 
        {
            adj[i][j] = 0;
        }
    }

    cout << "Enter the edges: " << endl;
    for (int i = 0; i < Edge; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1; 
    }

    cout << "Enter Starting Node: ";
    cin >> start;

    cout << "BFS: ";
    BFS(start);

    return 0;
}
