

#include<iostream>
#include<vector>
using namespace std;

bool print(int arr[], int index, int n, int target){

    if (index == 0) {
        return 1;
    }
    if (index == n || target<0) {
        return 0;
    }
    // Check without including the current element
    bool no = print(arr, index + 1, n, target);
    // Check including the current element
    bool yes = print(arr, index + 1, n, target-arr[index]);

    // Return true if either returns true
    return no || yes;
}

int main() {
    int arr[] = {3, 6, 4, 5};
    int sum = 0, target = 12;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << print(arr, 0, n, target);
}