
#include<iostream>
using namespace std;
int binarysearch(int arr[], int start, int end, int x){

    if(start>end)
    {
        return 0;
    }

    int mid = start + (end-start)/2;

    if(arr[mid] == x)
    {
        return mid;
    }
    else if(arr[mid] < x)
    {
        return binarysearch(arr, mid+1, end, x);
    }
    else{
        return binarysearch(arr, start, mid-1, x);
    }
}

int main(){

    int arr[] = {3, 8, 11, 15, 20, 22};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 15;

    cout<<x <<" is preasent at index : "; 
    cout<<binarysearch(arr, 0, n-1, x);
}