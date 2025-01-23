#include<iostream>
using namespace std;

int main(){
    int i, j;

    cout<<"\nstar pattern printing: \n\n";
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"\nNumber pattern printing column wise:\n\n";
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<"\nNumbetr pattern printing Row wise:\n\n";
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    cout<<"\nReverse wise Row element printing:\n\n";
    for(i=1; i<=5; i++){
        for(j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}