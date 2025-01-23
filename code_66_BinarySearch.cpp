//ROTATED ARRAY:-
//Find the minimum element in the array with the time complexity = O(lig n).

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 8, 10, 2, 4}; // The input array
    int start = 0, end = 4, mid;
    int ans = arr[0]; // Initialize ans to the first element

    while(start <= end)
    {
        mid = start + (end - start) / 2;

        // If mid element is greater than or equal to the first element,
        // the minimum element is in the right part
        if(arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        // If mid element is less than the first element,
        // the minimum element is in the left part
        else if(arr[mid] < arr[0])
        {
            ans = arr[mid];
            end = mid - 1;
        }
    }

    cout << "Minimum element = " << ans << endl; // Print the minimum element
    return 0;
}
