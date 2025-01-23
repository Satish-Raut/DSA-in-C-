#include<iostream>
using namespace std;

int main(){
    int arr[4] = {1, 2, 3, 4};
    int n=4, start = 0, end = 3, mid, k = 2, ans=4;

    while (start<=end)
    {
        mid = (start + end)/2;

        if(arr[mid]-mid-1 >= k){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid+1;
        }
    }

    cout<<k<<"th missing element = "<<ans+k;
    
}