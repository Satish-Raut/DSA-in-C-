
//Rotate Matrix 180 degree

#include<iostream>
using namespace std;

int reverse_row(int matrix[][4], int row, int col){
    for(int i=0; i<row; i++)
    {
        int start = 0, end = row-1;
        while(start<end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++, end--;
        }
    }
}

int reverse_col(int matrix[][4], int row, int col){
    for(int i=0; i<row; i++)
    {
        int start = 0, end = row-1;
        while(start<end)
        {
            swap(matrix[start][i], matrix[end][i]);
            start++, end--;
        }
    }
}

int print_matrix(int matrix[][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int matrix[4][4] = { {1,  2,  3,  4},
                         {5,  6,  7,  8}, 
                         {9,  10, 11, 12},
                         {13, 14, 15, 16} };

    int row = 4, col = 4;
    reverse_row(matrix, row, col);
    reverse_col(matrix, row, col);
    print_matrix(matrix, row, col);

}