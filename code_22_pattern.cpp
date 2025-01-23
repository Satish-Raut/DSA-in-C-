#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"\nEnter the value of n: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        //Print space
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(j=1; j<=i; j++){
            cout<<"*   ";
        }
        cout<<endl;
    }

    for(i=n; i>=1; i--)
    {
        //Print space
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(j=1; j<=i; j++){
            cout<<"*   ";
        }
        cout<<endl;
    }
}
