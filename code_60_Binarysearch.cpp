#include<iostream>
using namespace std;

int main(){
    int arr[7] = {30, 28, 20, 16, 5, 2, 1};
    int n = 7, mid, key = 5;
    int start = 0, end = n-1;

    while(start<=end){
        mid = (start + end)/2;

        if (arr[mid] == key)
        {
            cout<<"Got it\n"<<"index = "<<mid;
            break;
        }
        else if(arr[mid]<key){
            end = mid - 1;
        }
        else if(arr[mid]>key){
            start = mid + 1;
        }
    }
    if(start>end){
        cout<<"Not present";
    }
}