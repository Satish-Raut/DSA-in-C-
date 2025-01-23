
//Binary search:-

#include<iostream>
using namespace std;

int main(){
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

    int start = 0, end = n-1, mid;

    while(start<=end){
        mid = (start+end)/2;

        if(arr[mid] == key)
        {
            cout<<"Got it"<<"\nindex of "<<key<<" is = "<<mid;
            break;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }

        else if(arr[mid]>key){
            end = mid-1;
        }
    }
    if(start>end){
        cout<<"Not present";
    }
    
}