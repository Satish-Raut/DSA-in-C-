//Bubble sort from the last index or reverse wise

#include<iostream>
using namespace std;

int main(){
    // int arr[5] = {7, 3, 1, 9, 4};
    cout<<"Bubble sort from the last index or reverse wise.\n";
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements = ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=1; i<n; i++){
        int swapped = 0;
        for(int j=n-1; j>=i; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
                swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}