
//Reverse each row of Matrix

#include<iostream>
using namespace std;

void reverse_array(int arr[][4], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=col-1; j>=0; j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
}

int main(){
    int arr[3][4] = {2, 3, 4, 5,
                     1, 2, 6, 8,
                     4, 9, 3, 2};

    int row = 3, col = 4;
    cout<<"Reversed Array: \n";
    // reverse_array(arr, row, col);

    for(int i=0; i<row; i++)
    {
        int start = 0, end = col-1;
        while(start < end)
        {
            swap(arr[start], arr[end]);
            start++, end--;
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

