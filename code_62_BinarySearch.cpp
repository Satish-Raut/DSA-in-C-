
//(Q.2) -> Search Insert Position.

// {1, 4, 6, 8, 10, 14, 16, 18}, target = 5
// o/p: 2

// {1, 4, 6, 8, 10, 14, 16, 18}, target = 4
// o/p: 1


//Using Linear search:-

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[8] = {1, 4, 6, 8, 10, 14, 16, 18}, target = 5;
//     int n = 8;

//     for(int i = 0; i<n; i++){
//         if(arr[i] == target){
//             cout<<"Correct position = "<<i;
//             break;
//         }
//         else if(arr[i]>target){
//             cout<<"Correct position = "<<i;
//             break;
//         }
//     }
// }

// using Binary search :

#include<iostream>
using namespace std;

int main(){
    int arr[8] = {1, 4, 6, 8, 10, 14, 16, 18};
    int target = 11, n = 8;
    int start = 0, end = n-1, mid;
    int index = 8;  //size of Array

    while(start<=end){
        mid = (start+end)/2;

        if(arr[mid]==target){
            index = mid;    
            break;
        }
        else if(arr[mid]<target){
            start = mid + 1;
        }
        else if(arr[mid]>target){
            index = mid;
            end = mid - 1;
        }
    }
    cout<<"Correct position = "<<index;
}

