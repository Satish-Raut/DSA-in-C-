
// Q. Search in a row-column sorted Matrix

// Given a matrix of size n x m, where every row and column is sorted in increasing order, and a number x. Find whether element x is present in the matrix or not.

// Example 1:

// Input:
// n = 3, m = 3, x = 62
// matrix[][] = {{ 3, 30, 38},
//               {36, 43, 60},
//               {40, 51, 69}}
// Output: 0
// Explanation:
// 62 is not present in the matrix, 
// so output is 0.

// Example 2:
// Input:
// n = 1, m = 6, x = 55
// matrix[][] = {{18, 21, 27, 38, 55, 67}}
// Output: 1
// Explanation: 55 is present in the matrix.

#include<iostream>
using namespace std;

int main(){
    int matrix[3][3] = {{3, 30, 38},
                        {36, 43, 60},
                        {40, 51, 69}};

    int n = 3, m = 3, x = 51;

    int i = 0, j = m - 1;
    while (i < n && j >= 0) {
        if (matrix[i][j] == x) {
            cout << i << ", " << j << endl;
            return 0;
        } else if (matrix[i][j] < x) {
            i++;
        } else {
            j--;
        }
    }

    cout << "Element not found" << endl;
    return 0;
}
