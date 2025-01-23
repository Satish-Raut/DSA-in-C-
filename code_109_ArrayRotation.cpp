//Rotate Matrix 180 degree

#include<iostream>
#include<algorithm>
using namespace std;

void transpose(int matrix[][4], int row, int col){
    for(int i = 0; i < row-1; i++) {
        for(int j = i+1; j < col; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void reverseRows(int matrix[][4], int row, int col){
    for(int i = 0; i < row; i++) {
        int start = 0, end = col - 1;
        while(start < end) {
            swap(matrix[i][start], matrix[i][end]);
            start++, end--;
        }
    }
}

void printMatrix(int matrix[][4], int row, int col) 
{
    for(int i = 0; i < row; i++) 
    {
        for(int j = 0; j < col; j++) 
        {
            cout <<matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int matrix[4][4] = { {1,  2,  3,  4},
                         {5,  6,  7,  8}, 
                         {9,  10, 11, 12},
                         {13, 14, 15, 16} };

    int row = 4, col = 4;

    cout << "Original Matrix: \n";
    printMatrix(matrix, row, col);

    // Rotate 180 degrees: Transpose, reverse rows, then reverse columns
    transpose(matrix, row, col);
    reverseRows(matrix, row, col);
    transpose(matrix, row, col);
    reverseRows(matrix, row, col);

    cout << "\nMatrix rotated by 180 degrees: \n";
    printMatrix(matrix, row, col);

    return 0;
}
