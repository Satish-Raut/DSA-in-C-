

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>nums1 = {1,2,3, 0, 0, 0}, nums2 = {2,5,6};
    int m = 3, n = 3;

    vector<int>ans(m+n);
    int i = 0, j=0, k = 0;

    while(i<m && j<n)
    {
        if(nums1[i] <= nums2[j])
        {
            ans[k] = nums1[i];
            k++, i++;
        }
        else
        {
            ans[k] = nums2[j];
            k++, j++;
        }
    }

    //remaining element of nums1
    while(i<m)
    {
        ans[k] = nums1[i];
        k++, i++;
    }

    //remaining element of nums2
    while(j<n)
    {
        ans[k] = nums2[j];
        k++, j++;
    }

    for(int t = 0; t<k; t++)
    {
        cout<<ans[t]<<" ";
    }

    

}