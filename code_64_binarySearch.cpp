

//Find the occurance of number using Binary search:- 

#include<iostream>
using namespace std;

int main(){
    int arr[8] = {2, 4, 4, 4, 4, 5, 5, 6};
    int n = 8, target = 5, start = 0, end = 7, mid;
    int first, last;

    while (start<=end)
    {
        mid = start + (end - start)/2;

        if(arr[mid] == target){
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid]<target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    cout<<"First = "<<first<<endl;
    start = 0, end = 7;

    while (start<=end)
    {
        mid = start + (end - start)/2;

        if(arr[mid] == target){
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid]<target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    cout<<"Last = "<<last<<endl;

    cout<<"Occurance of "<<target<<" is "<<(last - first) + 1;
    
}