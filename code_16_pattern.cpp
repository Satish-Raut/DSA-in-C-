#include<iostream>
using namespace std;

int main(){
    int i, j;

    cout<<"Reverse star Pattern Printing: \n\n";

    for(i=5; i>=1; i--){
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"\nReverse star Pattern Printing: \n\n";
    for(i=5; i>=1; i--){
        for(j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<"\nReversed_Number printing: \n\n";
    for(i=1; i<=5; i++){
        for(j=5; j>=5-(i-1); j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<"\nReversed_Number printing: \n\n";
    for(i=1; i<=5; i++){
        for(j=5; j>=i; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
