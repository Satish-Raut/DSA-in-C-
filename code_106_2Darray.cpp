
//Transpose of a matrix:(Code with efficient space complexity)
//Time complexity = O(row*col)
//Space complexity = O(1)

#include<iostream>
using namespace std;

int main(){

    int arr[4][4] = {1,  2,  3,  4,
                     5,  6,  7,  8,
                     9,  10, 11, 12, 
                     13, 14, 15, 16};
        
    int row = 4, col = 4;

    cout<<"Marrix = \n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }

    cout<<"Transpose Matrix = \n";

//Method - 01:    
    // for(int i=0; i<row; i++)
    // {
    //     for(int j=0; j<col; j++)
    //     {
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

//Method - 02:
    for(int i=0; i<row-1; i++)
    {
        for(int j=i+1; j<col; j++)
        {
            swap(arr[i][j], arr[j][i]);
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

//Time complexity = O(row*col)
//Space complexity = O(row*col)

