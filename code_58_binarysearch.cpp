#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){

    int start = 0, end = n-1, mid;

    while(start<=end){
        // mid = (start+end)/2;    // -> Thish is also correct.

        mid = start + (end - start)/2; // -> To avoid the integer overflow, we can use this approach. 

        if(arr[mid] == key)
        {
            // cout<<"Got it"<<"\nindex of "<<key<<" is = "<<mid;
            // break;
            return mid;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }

        else if(arr[mid]>key){
            end = mid-1;
        }
    }

    // cout<<"Not present";
    return -1;
}

int main(){
    // int arr[6] = {3, 7, 11, 12, 17, 21};
    // int n = 6, key = 21;
    // int start =0, end = n-1;

    int n, key;
    cout<<"Enter the number of element in array = ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements = ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the key = ";
    cin>>key;
    
    cout<<"The index of "<<key<<" = ";
    cout<<BinarySearch(arr, n, key);
    return 0;
}