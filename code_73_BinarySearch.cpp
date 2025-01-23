
//KOKO eating banana's:

// -> Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.
// -> Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.
// -> Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// -> Return the minimum integer k such that she can eat all the bananas within h hours.

// Example 1:

// Input: piles = [3,6,7,11], h = 8
// Output: 4
// Example 2:

// Input: piles = [30,11,23,4,20], h = 5
// Output: 30
// Example 3:

// Input: piles = [30,11,23,4,20], h = 6
// Output: 23

#include<iostream>
using namespace std;

int main() {
    int arr[4] = {3, 6, 11, 7}, h = 8;
    int n = 4;
    int start = 0, end = 0, mid, ans;

    for(int i=0; i<n; i++)
    {
        start += arr[i];
        if(end<arr[i])
        {
            end = arr[i];
        }
        // end = max(end, arr[i]);
    } 
    start = start/h;
    cout<<"start = "<<start<<endl;    //minimum banana KOKO eats with in 1 hour.
    cout<<"end = "<<end<<endl;    //maximum banana KOKO eats with in 1 hour.
    // start = sum/h;

    if(!start)
    {
        start = 1;  
    }

    while(start<=end)
    {
        mid = (start+end)/2;

        int total_time = 0;

        for(int i=0; i<n; i++)
        {
            total_time += arr[i]/mid;
            if(arr[i] % mid)
            {
                total_time++;         // 11 / 2 = 5.5 = 6  (This line of code round of to the next integer)
            }
        }

        if(total_time<=h)
        {
            ans = mid;
            end = mid-1;
        }
        else if(total_time>h)
        {
            start = mid + 1;
        }
    }

    cout<<"speed = "<<ans<<" banana's per hour"<<endl;

}
