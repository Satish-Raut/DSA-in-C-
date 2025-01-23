
//Relation between the array and pointer

#include<iostream>
using namespace std;

int main(){

    int arr[] = {11, 7, 8, 12, 14};

    int *ptr = &arr[3];  //Here address operator is mandetory
    cout<<*ptr<<endl<<endl;

    int *ptr1 = arr;    //Raise an error if there is address operator

    cout<<"Elements of the array: ";
    for(int i=0; i<5; i++)
    {
        cout<<ptr1[i]<<" ";
    }
    cout<<"\nAddress of each elements of the array: ";
    for(int i=0; i<5; i++)
    {
        cout<<(ptr1[i])<<" ";
    }

    cout<<"\n\n";
    cout<<arr+2<<endl;
    cout<<arr[2]<<endl;
    
}