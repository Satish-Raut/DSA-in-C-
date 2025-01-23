
//Removing duplicates from Array
//Time complexity = O(n)
//Space complexity = O(1)

#include<iostream>
using namespace std;

int main(){
    int arr[8] = {1, 2, 2, 3, 4, 4, 4, 5};
    int n = 8;

    int i=0;
    for(int j=1; j<n; j++)
    {
        if(arr[j] != arr[i])
        {
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout<<"After removing the duplicates the size of Arr = "<<i+1<<endl;
    cout<<"Array = ";
    for(int k = 0; k <= i; k++) {  // Adjusted to print only the unique part of the array
        cout << arr[k] << " ";
    }
    cout << endl;


}
