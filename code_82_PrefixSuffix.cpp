

//Suffix and Prefix sum:

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[6] = {6, 4, 5, -3, 2, 8};
    int n=6;

    vector<int>prefix(n);
    prefix[0] = arr[0];

    for(int i=1; i<n; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }

    cout<<"Prefix Sum = ";
    for(int i=0; i<n; i++)
    {
        cout<<prefix[i] <<" ";
    }
    cout<<endl;

    vector<int>suffix(n);
    suffix[n-1] = arr[n-1];

    for(int i=n-2; i>=0; i--)
    {
        suffix[i] = suffix[i+1] + arr[i];
    }

    cout<<"Suffix Sum = ";
    for(int i=0; i<n; i++)
    {
        cout<<suffix[i] <<" ";
    }

}