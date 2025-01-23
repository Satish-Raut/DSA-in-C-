
//  'HARD'
// DP Bottom- up approach:

// Input: triangle = [[2],[3,4],[6,5,7],[4,1,8,3]]
// Output: 11
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<vector<int>> triangle = {
        {2},
        {3, 4},
        {6, 5, 7},
        {4, 1, 8, 3}
    };

    // Start from the second to last row and move upwards to the top
    for (int row = triangle.size() - 2; row >= 0; --row) 
    {
        for (int col = 0; col < triangle[row].size(); ++col) 
        {
            int Min = min(triangle[row + 1][col], triangle[row + 1][col + 1]);
            triangle[row][col] += Min;
        }
    }

    // The top element now contains the minimum path sum
    cout << "Minimum path sum: " << triangle[0][0] << endl;

    return 0;
}
