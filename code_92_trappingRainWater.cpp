
//Approach - 03 (Using Two pointer concept.)
//Trapping rain water:
//Time complexity = O(n)
//Space complexity = O(1)


#include<iostream>
using namespace std;

int main(){
    int height[12] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n=12;
    int left_max = 0, right_max = 0, water = 0;
    int start = 0, end = n-1;

    while(start<end)
    {   
        if(height[start] < height[end])
        {
            if(height[start] < left_max)
            {
                water += left_max - height[start];
            }
            else
            {
                left_max = height[start];
            }
            start++;
        }
        else
        {
            if(height[end] < right_max)
            {
                water += right_max - height[end];
            }
            else
            {
                right_max = height[end];
            }
            end--;
        }
    }

    cout<<"Amount of trapped water = "<<water;
}