
//Vector in column Array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<vector<int>>matrix(3, vector<int>(4, 3));
    int row = matrix.size(), col = matrix[0].size();
    cout<<"Row = "<<row<<"\nColumn = "<<col<<endl;

    cout<<"2D matrix :\n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    vector<vector<int>>matrix_1(3, vector<int>(4));
    int row1 = matrix_1.size(), col1 = matrix_1[0].size();
    cout<<"Row_1 = "<<row1<<"\nColumn_1 = "<<col1<<endl;

    cout<<"Enter the elements: \n";
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col1; j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<"2D matrix_1 :\n";
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col1; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }



}
