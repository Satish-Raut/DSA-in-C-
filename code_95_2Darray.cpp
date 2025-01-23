#include<iostream>
using namespace std;

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

    cout<<"Array elements: ";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    
    // Search for an element:
    int x = 14;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(arr[i][j] == x)
            {
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"No";
    return 0;
}
