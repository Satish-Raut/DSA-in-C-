#include<iostream>
using namespace std;

int main(){
    //Second maximum in array
    int arr[5] = {7, 6, 2, 1, 3};
    int ans = -1;

    for(int i=0; i<5;i++){
        if(arr[i] > ans){
            ans = arr[i];
        }
    }
    int s = -1;
    for(int i=0; i<5;i++){
        if(arr[i] != ans){
            s = max(s, arr[i]);
        }
    }

    cout<<s;


}