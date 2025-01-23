
//Largest sum contigous Sub-Array: 
//Time complecity = O(n^2)

#include<iostream>
using namespace std;

int main(){
    int arr[4] = {4, -6, 2, 8};
    int n = 4;

    int maxi = INT32_MIN;

    for(int i=0; i<n; i++)
    {   
        int prefix = 0;
        for(int j=i; j<n; j++)
        {
            prefix += arr[j];
            maxi = max(maxi, prefix);
        }
    } 
    cout<<maxi;
}