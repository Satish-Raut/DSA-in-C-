
//Permutation

#include<iostream>
#include<vector>
using namespace std;

void permute(int arr[], vector<vector<int>>& ans, vector<int>& temp, vector<bool>& visited) {
    if (visited.size() == temp.size()) {
        ans.push_back(temp);
        return;
    }

    for (int i = 0; i < visited.size(); i++) {
        if (visited[i] == 0) {
            visited[i] = 1;
            temp.push_back(arr[i]);
            permute(arr, ans, temp, visited);
            visited[i] = 0;
            temp.pop_back();
        }
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(n, false);  // Corrected line

    permute(arr, ans, temp, visited);

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

