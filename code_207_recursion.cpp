
//Number of subsets whose sum of elements is equals to 'sum'

#include<iostream>
#include<vector>
using namespace std;

int subsum(int arr[], int index, int n, int sum){

    if(sum == 0)
    {
        return 1;
    }
    if(sum<0 || index == n)
    {
        return 0;
    } 

    int no = subsum(arr, index+1, n, sum);
    int yes = subsum(arr, index, n, sum-arr[index]);

    return no+yes;
}

int main(){

    int arr[] = {2, 3, 4}, sum = 6;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<subsum(arr, 0, n, sum);
}