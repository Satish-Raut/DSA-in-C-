
//Devide array in 2 sub-Array with equal sum.
//Time complexicity = O(n)

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool equal_sum(vector<int>arr)
{
    int total_sum = 0, ans, n = arr.size();

    for(int i=0; i<n; i++)
    {
        total_sum += arr[i];
    }

    int prefix = 0;
    for(int i = 0; i<n-1; i++)
    {
        prefix += arr[i];
        ans = total_sum - prefix;
        if(ans == prefix)
        {
            return 1;
        }
    }

    return 0;
}

int main(){
    vector<int>arr{3, 4, -2, 5, 8, 20, -10, 8};
    int n = 8;

    cout<<equal_sum(arr);
    // int total_sum = 0, ans;

    // for(int i=0; i<n; i++)
    // {
    //     total_sum += arr[i];
    // }

    // int prefix = 0;
    // for(int i = 0; i<n-1; i++)
    // {
    //     prefix += arr[i];
    //     ans = total_sum - prefix;
    //     if(ans == prefix)
    //     {
    //         cout<<1;
    //         break;
    //     }
    // }



    // return 0;
}