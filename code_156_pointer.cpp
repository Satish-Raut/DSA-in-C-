

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a = 10;
    cout<<"Address of a = "<<&a<<endl;
    int *ptr;
    ptr = &a;
    cout<<"Value of a = "<<*ptr<<endl;
}

