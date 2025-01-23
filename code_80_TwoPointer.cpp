
//Two sum(Input array is must be sorted):-

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[5] = {2, 7, 11, 15, 27};
    int n = 5, target = 22;
    int start = 0, end = n-1;

    vector<int>A;

    while(start < end)
    {
        if(arr[start] + arr[end] == target)
        {
            A.push_back(start);
            A.push_back(end);
            break;
        }
        else if(arr[start] + arr[end] > target)
        {
            end--;
        }
        else{
            start++;
        }
    }

    for(int i=0; i<A.size(); i++){
        cout<<A[i]<<" ";
    }
}