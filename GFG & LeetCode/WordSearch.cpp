#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool Solve(vector<vector<char>>& mat, string& word, int i, int j, int idx, vector<vector<bool>>& visited)
    {
        if(idx == word.size())
        {
            return true;
        }

        if(i < 0 || j < 0 || i >= mat.size() || j >= mat[0].size() || visited[i][j] || mat[i][j] != word[idx])
        {
            return false;
        }

        visited[i][j] = true;

        if(Solve(mat, word, i-1, j, idx+1, visited) || 
           Solve(mat, word, i+1, j, idx+1, visited) || 
           Solve(mat, word, i, j-1, idx+1, visited) || 
           Solve(mat, word, i, j+1, idx+1, visited))
        {
            return true;
        }

        visited[i][j] = false;
        return false;
    }

    bool isWordExist(vector<vector<char>>& mat, string word) {
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<bool>> visited(n, vector<bool>(m, false));

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(mat[i][j] == word[0] && Solve(mat, word, i, j, 0, visited))
                {
                    return true;
                }
            }
        }

        return false;
    }
};

// Driver code
int main() {
    vector<vector<char>> mat = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };

    Solution sol;
    string word = "ABCCED";
    cout << (sol.isWordExist(mat, word) ? "Word Found" : "Word Not Found") << endl;

    word = "SEE";
    cout << (sol.isWordExist(mat, word) ? "Word Found" : "Word Not Found") << endl;

    word = "ABCB";
    cout << (sol.isWordExist(mat, word) ? "Word Found" : "Word Not Found") << endl;

    return 0;
}
