

#include<iostream>
using namespace std;
int linearsearch(int arr[],int x,int index,int n){
    
    if(index == n)
    {
        // return 0;
        return -1;
    }

    if(arr[index] == x)
    {
        return index;
        // return 1;
    }

    return linearsearch(arr, x ,index+1, n);

}


int main(){

    int arr[] = {2, 4, 7, 3, 8, 11, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 8;
    cout<<x <<" is preasent at index : "; 
    cout<<linearsearch(arr, x, 0, n);


}