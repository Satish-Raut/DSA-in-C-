
//maximum difference between 2 element: 
//Time complexity = O(n)

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    int min_element = arr[n-1];
    int max_diff = INT32_MIN;

    for(int i = n - 2; i >= 0; i--) 
    {
        int diff = arr[i] - min_element;

        if(max_diff < diff) 
        {
            max_diff = diff;
        }
        if(arr[i] < min_element) 
        {
            min_element = arr[i];
        }
    }

    cout << "Max. difference between 2 elements = " << max_diff;
    return 0;
}
