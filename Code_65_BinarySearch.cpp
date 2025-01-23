
//Peak index in mountain array :-

#include<iostream>
using namespace std;

int main(){
    int arr[7] = {2, 4, 6, 8, 10, 8, 5};
    int mid, start = 0, end = 6, ans;

    while(start <= end){
        mid = (start + end)/2;

        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            ans = mid;
            break;
        }
        else if(arr[mid]>arr[mid-1]){
            start = mid+1;
        }
        else if(arr[mid]<arr[mid-1]){
            end = mid-1;
        }

    }

    cout<<"Peak index = "<<ans;
}
