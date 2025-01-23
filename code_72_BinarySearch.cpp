

//Aggressive Cow:-

// You are given an array consisting of n integers which denote the position of a stall. You are also given an integer k which denotes the number of aggressive cows. You are given the task of assigning stalls to k cows such that the minimum distance between any two of them is the maximum possible.

// -> The first line of input contains two space-separated integers n and k.
// -> The second line contains n space-separated integers denoting the position of the stalls.

// Example 1:
// Input:
// n=5 
// k=3
// stalls = [10 1 2 7 5]
// Output:
// 4

// Explanation:
// The first cow can be placed at stalls[0],
// the second cow can be placed at stalls[1] and
// the third cow can be placed at stalls[4].
// The minimum distance between cows, in this case, is 4,
// which also is the largest among all possible ways.


#include<iostream>
using namespace std;

void Swap(int arr[], int n){

    for(int i=1; i<n; i++)
    {
        int swapped = 0;
        for(int j=0; j<=n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = 1;
            }
        }
        if(swapped==0){
            break;
        }
    }

    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int stall[5] = {1, 2, 4, 8, 9};
    int n = 5, k=3;

    cout<<"Stalls: ";
    Swap(stall,n);

    int start = stall[0], end = stall[n-1] - stall[0], mid, ans;

    while(start<=end)
    {
        mid = (start + end)/2;
        int count = 1, pos = stall[0];

        for(int i=1; i<n; i++)
        {
            if(pos + mid <= stall[i])
            {
                count++;
                pos = stall[i];
            }
        }

        if(count<k)
        {
            end = mid-1;
        }
        else if(count>=k)
        {
            ans = mid;
            start = mid + 1;
        }
    }

    cout<<"\nMaximum distance = "<<ans;
}

