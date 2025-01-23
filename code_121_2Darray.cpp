
//Occurance of the Numbers:-
//Time complexity = O(n)
//space complexity = O(n)

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[8] = {3, 2, 5, 3, 1, 2, 3, 7};
    int n=8;

    for(int i=0; i<n; i++)
    {
        arr[i]--;
    }

    vector<int>count(n);
    for(int i=0; i<n; i++)
    {
        count[arr[i]]++;
    }

    for(int i=0; i<n; i++)
    {
        cout<<count[i]<<" ";
    }

    
}