
// Q2: Insertion Sort Algorithm to sort the array of integers in increasing order if we start from the last element of the array. Question was explained in the class.

#include<iostream>
using namespace std;

int main(){
    // int arr[5] = {7, 4, 2, 3, 5};
    int n; 
    cout<<"Enter the value of n = ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements = ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    for(int i=1; i<n; i++){
        for(int j=n-1-i; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
            else{
                break;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}