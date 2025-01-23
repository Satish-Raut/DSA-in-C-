
//Rotation of Array:-

#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter the size of array = ";
    // cin>>n;
    
    int arr[5] = {1, 2, 3, 4, 5};
    int temp = arr[4];

    for(int i=3; i>=0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = temp;

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

}