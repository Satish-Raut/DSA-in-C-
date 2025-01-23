
//Rotate Matrix k times

#include<iostream>
using namespace std;

void rotate(int row, int col, int matrix[][4]){
    //Transpose
    for(int i = 0; i < row; i++) 
    {
        for(int j = i+1; j < col; j++) 
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    //Reverse
    for(int i = 0; i < row; i++) 
    {
        int start = 0, end = col - 1;
        while(start < end) 
        {
            swap(matrix[i][start], matrix[i][end]);
            start++, end--;
        }
    }

}

void printMatrix(int matrix[][4], int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int matrix[4][4] = { {1,  2,  3,  4},
                         {5,  6,  7,  8}, 
                         {9,  10, 11, 12},
                         {13, 14, 15, 16} };
    int k, row = 4, col = 4;
    cout<<"Enter value of K = ";
    cin>>k;
    
    k = k%4;

    while(k)
    {
        rotate(4, 4, matrix);
        k--;
    }

    cout<<"rotated Array: \n";
    printMatrix(matrix, 4, 4);

}
