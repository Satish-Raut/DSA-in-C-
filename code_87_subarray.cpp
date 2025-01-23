
//Kadane's Algorithm:

//Largest sum contigous Sub-Array:
//Time complexity = O(n)

#include<iostream>
using namespace std;

int main(){
    int arr[4] = {4, -6, 2, 8};
    int n = 4;

    int maxi = INT32_MIN, prefix = 0;
    
    for(int i=0; i<n; i++)
    {
        prefix += arr[i]; //4 , -2, 0, 8
        maxi = max(maxi, prefix); // 4, 4, 4, 
        if(prefix<0)
        {
            prefix = 0;
        }
    }

    cout<<maxi;
}
