
//un-directional un-weighted

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vertex, edge;
    cout << "Enter vertex and edge: ";
    cin >> vertex >> edge;

    vector<vector<bool>> AdjMat(vertex, vector<bool>(vertex, false));

    int u, v;

    for (int i = 0; i < edge; i++) {
        cout << "Path exist in-between: ";
        cin >> u >> v;

        AdjMat[u][v] = 1;
        AdjMat[v][u] = 1;
        
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
