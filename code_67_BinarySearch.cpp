
// ROTATED ARRAY:-
//Find the index of the target element with time complexity = O(log n).

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {6, 8, 10, 2, 4};
    int start = 0, end = 4, target = 2, mid, index = -1;

    while(start<=end)
    {
        mid = start + (end-start)/2;

        if(arr[mid] == target)
        {
            index = mid;
            break;
        }
        //Left sorted Array:
        else if(arr[mid] > arr[0])
        {
            if(arr[start]<=target && arr[mid]>=target)
            {
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        //Right sorted Array:
        else if(arr[mid] < arr[0])
        {
            if(arr[mid]<= target && arr[end]>=target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    cout<<"Index of "<<target<<" is "<<index;
}
