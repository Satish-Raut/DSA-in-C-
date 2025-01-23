#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

#define INF 1e9

void FloydWarshall(vector<vector<int>>& dist, int V) {
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) { // Note: i loops before j
            for (int j = 0; j < V; j++) {
                if (dist[i][k] != INF && dist[k][j] != INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
}

int main() {
    int V, E;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<int>> dist(V, vector<int>(V, INF));

    for (int i = 0; i < V; i++) {
        dist[i][i] = 0; // Distance to self is 0
    }

    cout << "Enter the edges (u v w):\n";
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = w; // For directed graph
    }

    FloydWarshall(dist, V);

    cout << "\nShortest Distance Matrix:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF) {
                cout << setw(5) << "INF";
            } else {
                cout << setw(5) << dist[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}
