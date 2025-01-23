
//Pointer arithmatic operation

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    cout<<*arr<<endl;
    cout<<(*arr)+5 <<endl; 

    cout<<arr[0]++ <<endl<<endl; 
    cout<<(arr[0])<<endl; 

    cout<<arr[2]<<endl;

    cout<<arr[0]+3 <<endl; 
    cout<<*(arr+2)-1 <<endl; 


}