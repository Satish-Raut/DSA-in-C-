
//un-directional weighted

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vertex, edge;
    cout << "Enter vertex and edge: ";
    cin >> vertex >> edge;

    vector<vector<int>> AdjMat(vertex, vector<int>(vertex, 0));

    int u, v, weight;

    for (int i = 0; i < edge; i++) {
        cout << "Path exist in-between: ";
        cin >> u >> v >> weight;

        AdjMat[u][v] = weight;
        AdjMat[v][u] = weight;
        
    }

    cout << "\nAdjacency Matrix:" << endl;
    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; j++) {
            cout << AdjMat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
