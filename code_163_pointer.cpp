

#include<iostream>
using namespace std;

int main(){
    char arr[] = {'1', '2', '3', '4', '5'};

    cout<<"Base address: "<<arr<<endl;  //It return the entire array
    cout<<"value at 0th index: "<<*arr<<endl;
    cout<<"value at 0th index: "<<*arr<<endl<<endl;

    char arr1[] = "12345";
    cout<<arr1<<endl;

    char *ptr = arr1;
    cout<<ptr<<endl;

    cout<<"Base address: "<<(void*)arr<<endl<<endl;
    cout<<"address of index 2: "<<(void*)arr+2<<endl<<endl;
   


}