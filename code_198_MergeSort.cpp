
//Merge Sort

#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end){

    vector<int>temp(end-start+1);
    int left = start, right = mid+1, index = 0;

    while(left<=mid && right<=end)
    {
        if(arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            index++, left++;
        }
        else{
            temp[index] = arr[right];
            index++, right++;
        }
    }

    //if any elements of left array is left

    while(left <= mid)
    {
        temp[index] = arr[left];
        index++, left++;
    }
    //if any elements of right array is left

    while(right <= end)
    {
        temp[index] = arr[right];
        index++, right++;
    }

    // Copy sorted subarray into original array
    for (int i = 0; i < temp.size(); i++) {
        arr[start + i] = temp[i];
    }

}

void mergesort(int arr[], int start, int end){

    if(start == end)
    {
        return;
    }

    int mid = start + (end-start)/2;
    //left part
    mergesort(arr, start, mid);
    //right part
    mergesort(arr, mid+1, end);
    //merge
    merge(arr, start, mid, end);

}

int main(){

    int arr[] = {6, 3, 2, 5, 2, 8, 1, 3, 2, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergesort(arr, 0, n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

