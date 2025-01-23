

//  Day 29/180 Insertion Sort in C++

// Q1: Use Insertion Sort Algorithm to sort the array of integers in decreasing order.

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {3, 5, 1, 8, 2};
    int n = 5;

    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j]>arr[j-1])
            {
                swap(arr[j], arr[j-1]);
            }
            else{
                break;
            }
        }
    }

    cout<<"Sorted Array = ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}



