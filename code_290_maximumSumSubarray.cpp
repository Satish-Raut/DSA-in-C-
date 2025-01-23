#include <iostream>
#include <climits>
using namespace std;

// Function to find the maximum subarray sum
int MaxSubarray(int arr[], int n) {
    int maxi = INT_MIN;
    int prefix = 0;

    for (int i = 0; i < n; i++) {
        prefix += arr[i];
        maxi = max(maxi, prefix);

        if (prefix < 0) {
            prefix = 0;
        }
    }

    return maxi;
}

// Function to find the minimum subarray sum
int MinSubarray(int arr[], int n) {
    int mini = INT_MAX;
    int prefix = 0;

    for (int i = 0; i < n; i++) {
        prefix += arr[i];
        mini = min(mini, prefix);

        if (prefix > 0) {
            prefix = 0;
        }
    }

    return mini;
}

// Function to find the maximum circular subarray sum
int CircularSubarray(int arr[], int n) {
    int minsum = MinSubarray(arr, n);
    int maxsum = MaxSubarray(arr, n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int cs = sum - minsum;

    if (maxsum > 0) {
        return max(maxsum, cs);
    }
    return maxsum;
}

int main() {
    int arr[] = {-1, -1, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout<<"Sum: "<<sum<<endl;
    cout << "Maximum Subarray Sum: " << MaxSubarray(arr, n) << endl;
    cout << "Minimum Subarray Sum: " << MinSubarray(arr, n) << endl;
    cout << "Maximum Circular Subarray Sum: " << CircularSubarray(arr, n) << endl;

    return 0;
}
