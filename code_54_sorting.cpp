

//Insertion Sorting Algorithm:

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {4, 3, 5, 1, 2};
    int n = 5;

    for(int i=1; i<n; i++)
    {
        for(int j=i; j>0; j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j], arr[j-1]);
            }
            else{
                break;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}