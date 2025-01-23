

#include<iostream>
using namespace std;

int printcol(int arr[][3], int row, int col) // Here, in the parameter value 'int arr[][3]', row value is optional if we    mention the row value then the code is also execute properly. 

{
    for(int j=0; j<col; j++)    
    {
        for(int i=0; i<row; i++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}

int main(){

    int arr[2][3];
    int row = 2, col = 3;

    cout<<"Enter the array elements: ";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"The array elements row wise: ";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;

    cout<<"Array elements in column wise: ";
    printcol(arr, row, col);
}

