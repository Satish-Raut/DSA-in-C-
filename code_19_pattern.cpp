#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    cout<<"\nEnter the value of n = ";
    cin>>n;

    cout<<"\nStar Pyramid printing: \n\n";
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(j=1; j<=2*i-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"\nStar Pyramid printing: \n\n";
    for(i=1; i<=n; i++)
    {
        //Space print
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(j=1; j<=i; j++){
            cout<<j<<" ";
        }
        for(j=i-1; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<"\nReverse Star Pyramid printing: \n\n";
    for(i=1; i<=n; i++)
    {
        //Space printing
        for(j=1; j<=i-1; j++){
            cout<<"  ";
        }
        //Star Printing
        for(j=1; j<=(n-i)*2+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}