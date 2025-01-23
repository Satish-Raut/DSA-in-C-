#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        if (arr.size() < 3) return {}; // This should return a valid integer (could be handled better based on requirements)
        int result_sum = 0;
        int min_diff = INT_MAX;

        // Sort the elements
        sort(arr.begin(), arr.end());

        // Now fix the first element and find the other two elements
        for (int i = 0; i < arr.size() - 2; i++) {
            // Find other two elements using Two Sum approach
            int left = i + 1;
            int right = arr.size() - 1;

            while (left < right) {
                int sum = arr[i] + arr[left] + arr[right];
                int diff = abs(sum - target);

                if (diff < min_diff) {
                    min_diff = diff;
                    result_sum = sum;
                }

                if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return result_sum;
    }
};

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    Solution solution;
    int result = solution.threeSumClosest(nums, target);

    cout << "The closest sum is: " << result << endl;

    return 0;
}
