
//Q. Indexes of Subarray Sum

// Given an unsorted array arr of size n that contains only non negative integers, find a sub-array (continuous elements) that has sum equal to s. You mainly need to return the left and right indexes(1-based indexing) of that subarray.

// Input: arr[] = {1,2,3,7,5}, n = 5, s = 12
// Output: 2 4
// Explanation: The sum of elements from 2nd to 4th position is 12.

// Input: arr[] = {1,2,3,4,5,6,7,8,9,10}, n = 10, s = 15,
// Output: 1 5
// Explanation: The sum of elements from 1st to 5th position is 15.


#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1,2,8,7,5}, n = 5, s = 12;

    int start = 0, end = 0, current_sum = 0, found = 0;

    while (end < n) {
        current_sum += arr[end];

        // While current sum is greater than the target sum, subtract the start element
        while (current_sum > s && start < end) {
            current_sum -= arr[start];
            start++;
        }

        // If current sum equals the target sum, return the 1-based indexes
        if (current_sum == s) {
            cout<< start + 1<<" "<< end + 1;
            found = 1;
            break;
        }

        // Move to the next element
        end++;
    }
    
    if(found == 0){
        cout<<-1;
    }
}
