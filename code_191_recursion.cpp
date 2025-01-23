

#include <iostream>
#include <algorithm>
using namespace std;

int minelement(int arr[], int n, int index) {
    if (index == n-1) {
        return arr[index];
    }

    return min(arr[index] , minelement(arr, n, index + 1));
}

int main() {
    int arr[] = {9, 6, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << minelement(arr, n, 0) << endl;

    return 0;
}