
// Merge sort in descending order
//Time Complexity = O(n*logn)
//Space complexity = O(n)

#include<iostream>
#include<vector>
using namespace std;

// Function to merge two sorted subarrays
void merge(int arr[], int start, int mid, int end){
    vector<int> temp(end-start+1);
    int left = start, right = mid+1, index = 0;

    // Merge the two subarrays in descending order
    while(left <= mid && right <= end)
    {
        if(arr[left] >= arr[right])
        {
            temp[index] = arr[left];
            index++, left++;
        }
        else{
            temp[index] = arr[right];
            index++, right++;
        }
    }

    // Copy any remaining elements from the left subarray
    while(left <= mid)
    {
        temp[index] = arr[left];
        index++, left++;
    }

    // Copy any remaining elements from the right subarray
    while (right <= end)
    {
        temp[index] = arr[right];
        right++, index++;
    }

    // Copy the merged subarray back to the original array
    for (int i = 0; i < temp.size(); i++) {
        arr[start + i] = temp[i];
    }
}

// Function to perform merge sort
void mergesort(int arr[], int start, int end){
    if(start == end)
    {
        return;
    }

    int mid = start + (end-start)/2;
    // Recursively sort the left subarray
    mergesort(arr, start, mid);
    // Recursively sort the right subarray
    mergesort(arr, mid+1, end);
    // Merge the two sorted subarrays
    merge(arr, start, mid, end);
}

int main(){
    int arr[] = {6, 3, 2, 5, 2, 8, 1, 3, 2, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergesort(arr, 0, n-1); // Note: end index is n-1, not n

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}