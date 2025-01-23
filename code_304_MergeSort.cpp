
#include<iostream> 
#include<vector> 
using namespace std;

void Merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int>temp;

    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low; i<=high; i++)
    {
        arr[i] = temp[i-low];
    }
}

void MS(vector<int> &arr, int low, int high)
{
    if(low == high)
    {
        return;
    }

    int mid = (low + high)/2;

    MS(arr, 0, mid);
    MS(arr, mid+1, high);

    Merge(arr, low, mid, high);    

}

void MergeSort(vector<int>&arr, int n)
{
    MS(arr, 0, n-1);

}

int main()
{
    vector<int>arr = {3, 1, 2, 4, 1, 5, 2, 6, 4};
    MergeSort(arr, 9);

    cout<<"Sorted Array: ";
    for(int i=0; i<9; i++)
    {
        cout<<arr[i]<<" ";
    }
}