
//Q. find missing and repeating number.
//int arr[7] = {4, 3, 2, 1, 2, 7, 6}, n = 7;

//Nrute force approache( T.C = O(n^2) )

#include<iostream>
using namespace std;

int main(){
    int arr[7] = {4, 3, 2, 1, 2, 7, 6}, n = 7;

    int repeating = 0, missing = 0;

    //Repeating:
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                repeating = arr[i];
                break;
            }
        }
    }
    cout<<repeating<<endl;

    //Finding missing element:

    for(int i=1; i<=n; i++)
    {
        int found = 0;
        for(int j=0; j<n; j++)
        {
            if(arr[j] == i)
            {
                found = 1;
                break;
            }
        }
        if(!found)
        {
            missing = i;
            break;
        }
    }

    cout<<missing;

}