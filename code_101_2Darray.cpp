#include<iostream>
using namespace std;

void reverse_row(int arr[], int col) {
    int start = 0, end = col - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[3][4] = { {2, 3, 4, 5},
                      {1, 2, 6, 8},
                      {4, 9, 3, 2} };

    int row = 3, col = 4;
    cout << "Reversed Array: \n";
    
    for (int i = 0; i < row; i++) {
        reverse_row(arr[i], col);
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
