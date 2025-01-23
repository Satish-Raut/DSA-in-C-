#include<iostream>
using namespace std;

int main(){

    int i, j, n;
    cout<<"Enter value of n = ";
    cin>>n;

    cout<<"\nStar pattern printing: \n\n";
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"\nNumber pattern printing of row elements: \n\n";
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    cout<<"\nNumber pattern printing of column elements: \n\n";
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }


}