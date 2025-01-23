
//Rotation of Array:-

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;
    
    int arr[n], arr1[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    arr1[0] = arr[n-1];

    for(int i=0; i<n-1; i++){
        arr1[i+1] = arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr1[i]<<" ";
    }

}