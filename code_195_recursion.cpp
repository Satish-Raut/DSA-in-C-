#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {2, 5, 6, 0, 0, 1, 2}; 
    int target = 0;

    int n = nums.size();
    vector<int> rotate(n);

    int index = target, i;

    // Fill the first part of the rotated array
    for(i = 0; i < n - target; i++) {
        rotate[i] = nums[index];
        index++;
    }

    // Fill the second part of the rotated array
    int k = 0;
    for(int j = i; j < n; j++) {
        rotate[j] = nums[k];
        k++;
    }

    // Print the rotated array
    for(int m = 0; m < n; m++) {
        cout << rotate[m] << " ";
    }
    cout<<endl;

    bool ans = true;
    for(int i = 0; i < n; i++) {
        if(nums[i] != rotate[i]) {
            ans = false;
            break;
        }
    }
    cout << ans << endl;

    return 0;
   
}
