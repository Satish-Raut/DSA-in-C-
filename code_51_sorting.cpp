//Bubble sorting algorithm :-

#include<iostream>
using namespace std;

int main(){
    // int arr[] = {3, 4, 8, 5, 7};
    int n;
    cout<<"\nEnter the evalue of n = ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements = ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

//APPROACH - 1

    for(int i=1; i<n; i++){
        int swapped = 0;
        for(int j=0; j<=n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = 1;
            }
        }
        if(swapped==0){
            break;
        }
    }

    
//APPROACH - 2

    // for(int i=n-2; i>=0; i--){
    //     for(int j=0; j<=i; j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
    
    cout<<"Sorted array = ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}