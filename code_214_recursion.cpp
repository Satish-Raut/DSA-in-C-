
// Rat in a Maze

#include<iostream>
#include<vector>
using namespace std;

int row[4] = {-1, 1, 0, 0};
int col[4] = {0, 0, -1, 1};
string dir = "UDLR";

bool valid(int i, int j, int n) {
    return i >= 0 && j >= 0 && i < n && j < n;
}

void total_way(vector<vector<int>>& maze, int i, int j, int n, vector<string>& ans, vector<vector<bool>>& visited, string path) {
    if (i == n - 1 && j == n - 1) {
        ans.push_back(path);
        return;
    }

    visited[i][j] = 1;

    // checking all the directions
    for (int k = 0; k < 4; k++) 
    {
        if (valid(i + row[k], j + col[k], n) && maze[i + row[k]][j + col[k]] && !visited[i + row[k]][j + col[k]]) 
        {
            path.push_back(dir[k]);
            total_way(maze, i + row[k], j + col[k], n, ans, visited, path);
            path.pop_back();
        }
    }
    visited[i][j] = 0;
}

int main() {
    vector<vector<int>> maze = {{1, 0, 0, 0},
                                {1, 1, 0, 1},
                                {1, 1, 1, 1},
                                {1, 1, 1, 1}};
    
    int n = maze.size();
    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n, 0));
    string path;

    if(maze[0][0] == 0 || maze[n-1][n-1] == 0)
    {
        cout<<"not possible";
        return 0;
    }

    total_way(maze, 0, 0, n, ans, visited, path);

    cout<<"\nAll the possible paths: \n";
    for (int i = 0; i < ans.size(); i++) 
    {
        for (int j = 0; j < ans[i].size(); j++) 
        {
            cout<< (ans[i][j])<<" ";
           
        }
        cout << endl;
    }

    return 0;
}
