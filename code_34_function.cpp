#include<iostream>
using namespace std;

int inc_1(int n){   //Pass by value
    n++;
    // cout<<n<<endl;
}
int inc_2(int &n){  //Pass by reference
    n++;
    // cout<<n<<endl;
}
int swap(int &a, int &b){ 
    int c;
    c = a;
    a = b;
    b = c;
    // cout<< a<<" "<< b;
}
int main(){
    int a;
    cout<<"Enter value of a = ";
    cin>>a;
    cout<<"Using increament_1: ";
    inc_1(a);
    cout<<a<<endl;

    cout<<"Using increament_2: ";
    inc_2(a);
    cout<<a<<endl;

    int x, y;
    cout<<"Enter value of x and y = ";
    cin>>x>>y;
    cout<<"Swapping of integer: ";
    swap(x, y);
    cout<<x<<" "<<y;
}