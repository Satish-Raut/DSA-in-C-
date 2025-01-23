#include<iostream>
using namespace std;

int main(){
    //star Printing:-

    cout<<"\nstar Printing:-\n\n";
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=5; j++){  
            cout<<"* ";
        }
        cout<<"\n";
    }
    //Number Printing:-

    cout<<"\nNumber Printing:-\n\n";
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=5; j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }

    cout<<"\nreverse column Printing:-\n\n";
    for(int i = 1; i<=5; i++){
        for(int j = 5; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }


}