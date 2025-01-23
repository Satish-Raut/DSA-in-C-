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
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    int x, index = 0;
    cout<<"\nfind index of ";
    cin>>x;

    for(int i=0; i<n; i++){
        if(arr[i] == x){
            index = i;
            break;
        }
    }

    cout<<"index is = "<<index;
    cout<<"\n\nreversed array element: ";
    for(int i=n-1; i>=0;i--){
        cout<<arr[i]<<" ";
    }




    
}