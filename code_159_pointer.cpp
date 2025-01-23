
//Relation between the array and pointer

#include<iostream>
using namespace std;

int main(){

    int arr[] = {11, 7, 8, 12, 14};

    int *ptr = arr;
    
    cout<<"Elements of the array: ";
    for(int i=0; i<5; i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    
    int *ptr1 = &arr[4];
    cout<<"\n\nElements of the array in reverse order: ";
    for(int i=4; i>=0; i--)
    {
        cout<<*ptr1<<" ";
        ptr1--;
    }

    


}