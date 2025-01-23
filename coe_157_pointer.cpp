
//Relation between the array and pointer

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[] = {11, 7, 8, 12, 14};
    cout<<arr<<endl;
    cout<<arr+1<<endl;
    cout<<arr+2<<endl<<endl;

    
    cout<<&arr[3]<<endl;
    cout<<*(arr+3)<<endl<<endl; //It returns the value at 3rd index

    cout<<&(*(arr+4))<<endl; //It returns the address of the 4th index

    cout<<&(4[arr])<<endl;
    cout<<*(4 + arr)<<endl;

    cout<<"\nArray elements: ";
    for(int i=0; i<5; i++)
    {
        cout<<*(arr+i)<<" ";
    }

    cout<<"\nAddress of each elements: ";
    for(int i=0; i<5; i++)
    {
        cout<<(arr+i)<<" ";
    }
    
    
}