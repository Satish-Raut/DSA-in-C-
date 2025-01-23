//Segregate 0s and 1s:

#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1, 0, 1, 0, 1, 0};
    int n = 6, start = 0, end = 5;

    while(start<end)
    {
        if(arr[start] == 0)
        {
            start++;
        }
        else 
        {
            if(arr[end] == 0)
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
            else
            {
                end--;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}