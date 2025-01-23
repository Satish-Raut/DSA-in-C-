
//Two 2D array sum: 

#include<iostream>
using namespace std;

int main(){
    int arr1[2][3], arr2[2][3];
    int row = 2, col = 3, sum[2][3];

    cout<<"Arr_1 elements: ";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr1[i][j];
        }
    }

    cout<<"Arr_2 elements: ";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr2[i][j];
        }
    }

    cout<<"Sum of 2 array: \n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }

}
