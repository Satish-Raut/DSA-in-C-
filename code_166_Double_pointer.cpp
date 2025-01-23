

#include<iostream>
using namespace std;

int fun(int &p)
{
    p++;
}

int main(){
    int n = 10;
    int *p = &n;
    int **ptr = &p;
    int ***ptr1 = &ptr;
    cout<<"Address of n: "<<p<<endl;
    cout<<"Address of n: "<<*ptr<<endl;
    cout<<"Address of p: "<<&p<<endl;
    cout<<"Address of p: "<<ptr<<endl<<endl;

    cout<<"Value of n(single pointer): "<<*p<<endl;
    cout<<"Value of n(double pointer): "<<**ptr<<endl;
    cout<<"Value of n(triple pointer): "<<***ptr1<<endl<<endl;

    cout<<"Arithmatic operations: \n";
    cout<<*p+4<<endl;
    cout<<**ptr*4<<endl;
    // cout<<**ptr++<<endl;

    fun(**ptr);
    cout<<p<<endl;
    cout<<**ptr<<endl;


}