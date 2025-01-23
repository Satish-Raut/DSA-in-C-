#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> result;

        int first = 0, second = 0;
        while (first < nums1.size() && second < nums2.size()) {
            if (nums1[first] == nums2[second]) {
                if (result.empty() || result.back() != nums1[first]) {
                    result.push_back(nums1[first]);
                }
                first++;
                second++;
            } else if (nums1[first] < nums2[second]) {
                first++;
            } else {
                second++;
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = sol.intersection(nums1, nums2);

    cout << "Intersection: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    cout << std::endl;

    nums1 = {4, 9, 5};
    nums2 = {9, 4, 9, 8, 4};
    result = sol.intersection(nums1, nums2);
    
    cout << "Intersection: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    cout << std::endl;

    return 0;
}
