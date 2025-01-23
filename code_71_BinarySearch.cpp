

//Ship packeges:-
// Explanation of the Code:

// 1. Initialization:
//  -> start is initialized to the maximum weight of a single package, ensuring that the ship's capacity is at least the heaviest package.
//  -> end is the sum of all package weights, representing the scenario where the ship has to carry all packages at once.

// 2. Binary Search:
//  -> The binary search aims to find the minimum ship capacity that can handle all packages within the given days.

// 3. Weight Distribution:
//  -> weight accumulates the weights of packages for the current day.
// `-> If adding the current package exceeds mid, increment day_count and reset weight to the current package's weight, starting a new day.

// 4. Capacity Adjustment:
//  -> If day_count is within days, update ans to mid and try for a smaller capacity by setting end to mid - 1.
//  -> If day_count exceeds days, increase start to mid + 1 to try a larger capacity.



#include<iostream>
using namespace std;

int main(){
    int arr[6] = {3, 2, 2, 4, 1, 4};
    int n = 6, days = 3;

    int start = 0, end = 0, mid, ans;
    for(int i=0; i<n; i++)
    {
        start = max(start, arr[i]);
        end += arr[i];
    }

    while(start <= end)
    {
        mid = (start + end)/2;
        int weight = 0, day_count = 1;

        for(int i=0; i<n; i++)
        {
            weight += arr[i];
            if(weight>mid)
            {
                day_count++;
                weight = arr[i];
            }
        }

        if(day_count <= days)
        {
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }

    cout<<"Minimum weight capacity = "<<ans;
}