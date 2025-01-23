
//Approach - 02 (First find the Highest element and then solve it for both left and right side separately.) 

//Trapping rain water:
//Time complexity = O(n)
//Space complexity = O(1)

#include<iostream>
using namespace std;

int main(){
    int height[8] = {4, 2, 0, 5, 2, 6, 2, 3};
    int n=8;
    int left_max = 0, right_max = 0, water = 0, index = 0;

    //Maximum height:
    int max_height = height[0];
    for(int i=1; i<n; i++)
    {
        if(max_height < height[i])
        {
            max_height = height[i];
            index = i;
        }
    }

    //Left part:
    for(int i=0; i<index; i++)
    {
        if(left_max > height[i])
        {
            water += left_max - height[i];
        }
        else
        {
            left_max = height[i];
        }
    }

    //Right part:
    for(int i=n-1; i>index; i--)
    {
        if(right_max > height[i])
        {
            water += right_max - height[i];
        }
        else
        {
            right_max = height[i];
        }
    }

    cout<<"Amount of trapped water = "<<water;

}