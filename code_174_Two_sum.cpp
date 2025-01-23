

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class ThreeSum {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        if (arr.size() < 3) return {};

        // Sort the elements
        sort(arr.begin(), arr.end());
        set<vector<int>> resultSet;

        // Now fix the first element and find the other two elements
        
        for (int i = 0; i < arr.size() - 2; i++) {
            // Find other two elements using Two Sum approach
            int left = i + 1;
            int right = arr.size() - 1;

            while (left < right) {
                int sum = arr[i] + arr[left] + arr[right];

                if (sum == 0) {
                    // Add the set, and move to find other triplets
                    resultSet.insert({arr[i], arr[left], arr[right]});
                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        
        return vector<vector<int>>(resultSet.begin(), resultSet.end());
    }
};

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    ThreeSum threeSumSolver;
    vector<vector<int>> result = threeSumSolver.threeSum(nums);

    for (const auto& triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
