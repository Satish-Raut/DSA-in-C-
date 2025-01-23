
// (Q.1) 1st and last position of element in sorted Array:-
// Using Linear Search:-

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[8] = {2, 3, 3, 3, 3, 4, 5, 6};
//     int target = 3, n=8;

//     for(int i=0; i<n; i++){
//         if(arr[i] == target){
//             cout<<"first index = "<<i<<endl;
//             break;
//         }
//     }

//     for(int j=n-1; j>=0; j--){
//         if(arr[j] == target){
//             cout<<"Last index = "<<j<<endl;
//             break;
//         }
//     }

// }


// (Q.1) 1st and last position of element in sorted Array:-
// Using Binary Search:-

#include<iostream>
using namespace std;

int main(){
    int arr[8] = {2, 3, 3, 3, 3, 4, 5, 6};
    int target = 3, n=8, mid, first = -1, last = -1;
    int start = 0, end = n-1;

    while(start<=end){
        mid = (start + end)/2;

        if(arr[mid] == target){
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid]<target){
            start = mid + 1;
        }
        else if(arr[mid]>target){
            end = mid - 1;
        }
    }

    cout<<"first = "<<first<<endl;

    start = 0, end = n-1;
    while(start<=end){
        mid = (start + end)/2;

        if(arr[mid] == target){
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid]<target){
            start = mid + 1;
        }
        else if(arr[mid]>target){
            end = mid - 1;
        }
    }

    cout<<"Last = "<<last;
}