//Home work: 
//Sort an array using selection sort method and the approach should be put the largest element at the last index of the array,
//then 2nd last and then 3rd last continously sort the array.

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {9, 7, 3, 1, 6};
    int n=5;

    for(int i=n-1; i>=0; i--){
        int index = i;
        for(int j=i-1; j>=0; j--){
            if(arr[j]>arr[index]){
                index = j;
            }
        }
        swap(arr[index],arr[i]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

//-> Outer Loop: Runs from the last index towards the beginning, ensuring the largest element is placed at the end, then the second largest at the second last position, and so on.

//-> Inner Loop: Runs from the current position of the outer loop to the beginning, finding the largest element in that portion of the array.

//-> Swap Operation: The largest element found by the inner loop is swapped with the element at the current position of the outer loop.

//-> Print Loop: After sorting, the array is printed.
