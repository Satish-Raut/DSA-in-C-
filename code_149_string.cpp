
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr = {9, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    string s = "";

    int i = n-1;
    while(i>=0)
    {
        if(arr[i]==9)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] += 1;
        }
        i--;
    }

    arr.insert(arr.begin(), 1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    
    
    
}