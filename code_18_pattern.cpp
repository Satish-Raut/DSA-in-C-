#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    cout<<"Enter the value of n = ";
    cin>>n;

    cout<<"\nAlphabate printing: \n\n";
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(j=1; j<=i; j++){
            char name = 'A'+(j-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }

    cout<<"\nNumbers printing: \n\n";
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
