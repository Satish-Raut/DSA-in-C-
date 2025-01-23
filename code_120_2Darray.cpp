
//Find missing and repeating element:(Most efficient code)
//

#include<iostream>
using namespace std;

int main(){
    int arr[7] = {4, 3, 2, 1, 2, 7, 6};
    int n=7, missing = -1, repeated = -1;

    // Each element decreasing by 1
    for(int i=0; i<n; i++)
    {
        arr[i]--;
    }

    // store 2 number in one position
    for(int i=0; i<n; i++)
    {
        int pos = arr[i] % n;
        arr[pos] += n;
    }
    //missing:
    for(int i=0; i<n; i++)
    {
        if(arr[i]/n == 0)
        {
            missing = i+1;
        }

        if(arr[i]/n > 1)
        {
            repeated = i+1;
        }
    }

    cout<<"Missing = "<<missing<<endl;
    cout<<"Repeting = "<<repeated;


}