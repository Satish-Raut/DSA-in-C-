
//Occurance of the Numbers:-
//Time complexity = O(n)
//space complexity = O(1)


#include<iostream>
using namespace std;

int main(){

    int arr[5] = {2, 3, 2, 3, 5};
    int n=5;

    for(int i=0; i<n; i++)
    {
        arr[i]--;
    }

    for(int i=0; i<n; i++)
    {
        int pos = arr[i] % n;
        arr[pos] += n;
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]/n<<" ";
    }

}

