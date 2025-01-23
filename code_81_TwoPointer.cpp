
//Pair with given difference:   

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[6] = {2, 3, 5 , 10, 50, 80};
    int n = 6;
    int start = 0, end = 1, diff = 45;  //Start and end are both in alternative order.

    while(end<n)
    {

        if(arr[end] - arr[start] == diff){
            cout << start << ", " << end;
            break;
        }
        else if(arr[end] - arr[start] < diff){
            end++;
        } 
        else {
            start++;
        }

        if (start == end) {
            end++; // Ensure that end is always ahead of start
        }
    }

    return 0;
}
