#include <iostream>
#include <algorithm> // For sort function
using namespace std;

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 9, 7, 8};
    int n = 8, x = 16;
    
    // Sort the array:
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<=n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    //Find the 4 elements:
    
    int possible = 0, n1, n2, n3, n4;
    for (int k = 0; k < n - 3; k++) {
        int diff = x - arr[k];
        for (int i = k + 1; i < n - 2; i++) {
            int ans = diff - arr[i];
            int start = i + 1, end = n - 1;
            while (start < end) {
                if (arr[start] + arr[end] == ans) {
                    n1 = arr[k];
                    n2 = arr[i];
                    n3 = arr[start];
                    n4 = arr[end];
                    possible = 1;
                    break;
                } else if (arr[start] + arr[end] > ans) {
                    end--;
                } else {
                    start++;
                }
            }
            if (possible) break;
        }
        if (possible) break;
    }
    
    if (possible) {
        cout << "1\n";
        cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl;
    } else {
        cout << "0\n";
    }
    
    return 0;
}
