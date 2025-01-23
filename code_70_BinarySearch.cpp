

//Painter partition:

// Dilpreet wants to paint his dog's home that has n boards with different lengths. The length of ith board is given by arr[i] where arr[] is an array of n integers. He hired k painters for this work and each painter takes 1 unit time to paint 1 unit of the board. 

// The problem is to find the minimum time to get this job done if all painters start together with the constraint that any painter will only paint continuous boards, say boards numbered {2,3,4} or only board {1} or nothing but not boards {2,4,5}.

//Input:
// n = 5
// k = 3
// arr[] = {5,10,30,20,15}
// Output: 35

// Explanation: The most optimal way will be:
// Painter 1 allocation : {5,10}
// Painter 2 allocation : {30}
// Painter 3 allocation : {20,15}
// Job will be done when all painters finish
// i.e. at time = max(5+10, 30, 20+15) = 35

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {5, 10, 30, 20, 15};
    int n = 5, k = 3;

    if(k>n)
    {
        cout<<-1;
    }

    int start = 0, end = 0, mid, ans;
    for(int i=0; i<n; i++)
    {
        start = max(start, arr[i]);
        end += arr[i];
    }

    while(start<=end)
    {
        mid = start + (end - start)/2;

        int length = 0, painter = 1;
        for(int i=0; i<n; i++)
        {
            length += arr[i];
            if(length>mid)
            {
                painter++;
                length = arr[i];
            }
        }

        if(painter<=k)
        {
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid+1;
        }
    }

    cout<<"Minimum time takes to paint = "<<ans;  
}

