
//print the array values

#include <iostream>
using namespace std;

void print(int arr[], int n, int index) {
    if (index == n) {
        return;
    }
    cout << arr[index] << " ";
    print(arr, n, index + 1);
}

void reverse_print(int arr[], int n, int index) {
    if (index == n) 
    {
        return;
    }
    reverse_print(arr, n, index + 1);
    cout << arr[index] << " ";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Forward print:" << endl;
    print(arr, n, 0);
    cout << endl;

    cout << "Reverse print:" << endl;
    reverse_print(arr, n, 0);
    cout << endl;

    return 0;
}
