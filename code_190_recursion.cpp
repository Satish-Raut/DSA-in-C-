
//sum of element

#include <iostream>
using namespace std;

int sum(int arr[], int n, int index) {
    if (index == n) {
        return 0;
    }

    return arr[index] + sum(arr, n, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << sum(arr, n, 0) << endl;

    return 0;
}
