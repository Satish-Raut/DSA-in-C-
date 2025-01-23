

#include<iostream>
using namespace std;

int main(){
    int *ptr = new int;
    *ptr = 5;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    float *ptr2 = new float;
    *ptr2 = 2.3546;
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int *p = new int[n];

    for(int i=0; i<n; i++)
    {
        p[i] = i+1;
    } 

    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<" ";
    } 
    
    cout<<"\n"<<p<<endl;

    delete ptr;
    delete ptr2;
    delete p;

}