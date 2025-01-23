

//KOKO eating banana's:

#include <iostream>
using namespace std;

int minEatingSpeed(int arr[], int h, int n) {
    int start = 0, end = 0, mid, ans, sum = 0;

    // Determine the maximum value in the array
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (end < arr[i]) {
            end = arr[i];
        }
    }
    start = sum/h;
    // Binary search to find the minimum eating speed
    while (start <= end) {
        mid = (start + end) / 2;

        int total_time = 0;
        for(int i=0; i<n; i++)
        {
            total_time += arr[i]/mid;
            if(arr[i] % mid)
            {
                total_time++;         // 11 / 2 = 5.5 = 6  (This line of code round of to the next integer)
            }
        }

        if (total_time <= h) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    int arr[4] = {3, 6, 11, 7};
    int w = 8; // maximum hours KOKO can spend eating bananas
    int n = 4; // number of banana 
    cout << minEatingSpeed(arr, w, n) << endl;

    return 0;
}
