
//  3 Sum:

#include<iostream>
using namespace std;

int main(){

    int arr[6] = {1, 4, 45, 6, 10, 8};
    int n = 6, x = 24;
    //sort the array:
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<=n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    
    for(int i=0; i<n-2; i++)
    {
        int ans = x - arr[i];
        int start = i+1, end = n-1; 
        while(start<end)
        {
            if(arr[start] + arr[end] == ans)
            {
                cout<<arr[i]<<" "<<arr[start]<<" "<<arr[end];
                break;
            }
            else if(arr[start] + arr[end] > ans)
            {
                end--;
            }
            else{
                start++;
            }
        } 
    }
    
}