
//maximum difference between 2 element: 
//Time complexity = O(n^2)

#include<iostream>
using namespace std;

int main(){
    int arr[8] = {9, 5, 8, 12, 2, 3, 7, 4};
    int n = 8;
    int diff, max_diff = INT32_MIN;

    for(int i=0; i<n-1; i++)
    {   
        for(int j=i+1; j<n; j++)
        {
            diff = arr[i] - arr[j];
            max_diff = max(max_diff, diff);
        }
    }

    cout<<"Max. difference between 2 element = "<<max_diff;
}
