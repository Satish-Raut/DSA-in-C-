#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[4] = {4, 3, 7, 2};
    int n = 4;

    //code here
    cout<<"sub-Array of size 1: \n";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }

    cout<<"sub-Array of size 2: \n";
    for(int i=0; i<=n-2; i++)
    {
        for(int j=i; j<i+2; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }

    cout<<"sub-Array of size 3: \n";
    for(int i=0; i<=n-3; i++)
    {
        for(int j=i; j<i+3; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }

    cout<<"sub-Array of size 4: \n";
    for(int i=0; i<=n-4; i++)
    {
        for(int j=i; j<i+4; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }

}