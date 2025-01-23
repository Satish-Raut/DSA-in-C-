#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of element = ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array = ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    
    cout<<"\nreversed array element(M-2): ";
    
    int start = 0, end = n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}