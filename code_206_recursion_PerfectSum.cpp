
//Perfect sum

#include<iostream>
#include<vector>
using namespace std;

int subset(int arr[], int index, int sum, int n){

    if(index == n)
    {
        return sum == 0;
    }

    int no = subset(arr, index+1, sum, n);
    int yes = subset(arr, index+1, sum-arr[index], n);
    return no+yes;
}

int main(){

    int arr[] = {2, 5, 6, 1};
    int sum = 8, n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Number of perfect sum subsets: ";
    cout<<subset(arr, 0, sum, n);

    return 0;
}