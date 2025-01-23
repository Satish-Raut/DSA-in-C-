#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;
    
    switch(n){
        case 1:
            cout<<"Satish";
            break;
        case 2:
            cout<<"Raut";
            break;
        case 3:
            cout<<"Rohit";
            break;
        case 4:
            cout<<"Mohit";
            break;
        default:
            cout<<"Not present";
    }
}