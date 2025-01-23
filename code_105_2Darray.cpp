
//Transpose of a matrix:
//Time complexity = O(row*col)
//Space complexity = O(row*col)

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[4][4] = {1,  2,  3,  4,
                     5,  6,  7,  8,
                     9,  10, 11, 12, 
                     13, 14, 15, 16};
        
    int row = 4, col = 4;
    int brr[col][row];

    cout<<"Marrix = \n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }
    cout<<endl;

    cout<<"Transpose Matrix = \n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}

//Time complexity = O(row*col)
//Space complexity = O(row*col)
