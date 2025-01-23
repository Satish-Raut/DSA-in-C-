
//Q.  Container With Most Water:
// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
// Example 2:

// Input: height = [1,1]
// Output: 1

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int height[9] = {1,8,6,2,5,4,8,3,7}, n = 9;
    int start = 0, end = n-1, max_area = 0;

    while(start<end)
    {
        int area = min(height[start], height[end]) * (end-start);

        max_area = max(area, max_area);

        if(height[start]< height[end])
        {
            start++;
        }
        else{
            end--;
        }
    }

    cout<<max_area;
}