#include<iostream>
using namespace std;

int sum(int a, int b){
    int sum = a + b;
    cout<<"Sum = "<<sum<<endl;
}
void mul(int a = 10, int b= 20){
    int m = a * b;
    cout<<"Product = "<<m<<endl;
}
int main(){
    int x, y;
    cout<<"Enter 2 values = ";
    cin>>x>>y;

    sum(x, y);
    mul(x);
}