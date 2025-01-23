
//Sorted in descending order.

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {7, 4, 8, 5, 3};
    int n = 5;

    for(int i=1; i<n; i++){
        int swapped = 0;
        for(int j=0; j<=n-1-i; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = 1;
            }
        }
        if(swapped ==0){
            break;
        }
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}