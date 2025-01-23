
// Input: nums = [0,1,2,2,3,0,4,2], val = 2
// Output: 5, nums = [0,1,4,0,3,_,_,_]

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int nums[] = {0,1,2,2,3,0,4,2}, val = 2;
    int count = 0;
    int n = sizeof(nums) / sizeof(nums[0]);
    vector<int>ans;

    for(int i=0; i<n; i++)
    {
        if(nums[i] != val)
        {
            ans.push_back(nums[i]);
            count++;
        }
        else{
            count += 0;
        }
    }

    cout<<count<<endl;
    for(int i=0; i<count; i++)
    {
        cout<<ans[i]<<" ";
    }

}