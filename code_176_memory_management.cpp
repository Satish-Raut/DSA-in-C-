
#include<iostream>
using namespace std;

int main(){
    
    int n = 4, m = 5;

    int **ptr = new int *[n];

    for(int i=0; i<n; i++)
    {
        ptr[i] = new int[m];    
    }

    cout<<"Enter the elements: \n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>ptr[i][j];
        }
    }


    cout<<"2D array: \n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Release the memory

    for(int i=0; i<n; i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;

    
}