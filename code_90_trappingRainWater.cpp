
//Approach - 01: (In this approach i created two different array's named left_max and right_max and further proceed for solving.)

//Trapping rain water:
//Time complexity = O(n)
//Space complexity = O(n)

#include<iostream>
using namespace std;

int main(){
    int height[8] = {4, 2, 0, 5, 2, 6, 2, 3};
    int n=8;
    int left_max[n], right_max[n];

    //Left side max. height building Array
    left_max[0] = 0;
    for(int i=1; i<n; i++)
    {
        left_max[i] = max(left_max[i-1], height[i-1]); 
    }

    //Right side max. hight building Array
    right_max[n-1] = 0;
    for(int i=n-2; i>=0; i--)
    {
        right_max[i] = max(right_max[i+1], height[i+1]); 
    }

    //Count the amount of trapped water
    int water = 0;
    for(int i=0; i<n; i++)
    {
        int min_height = min(left_max[i], right_max[i]);
        if(min_height - height[i] >= 0)
        {
            water += min_height - height[i];
        }
    }

    cout<<"Amount of trapped water = "<<water;
}
