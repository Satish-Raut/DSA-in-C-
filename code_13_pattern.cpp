#include<iostream>
using namespace std;

int main(){

    cout<<"\nPrinting square of column digits: \n\n";
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<j*j<<" ";
        }
        cout<<endl;
    }

    cout<<"\nPrinting alphabate row wise: \n\n";
    for(int i=1; i<=5; i++){
        char name = 'a'+(i-1);
        for(int j=1; j<=5; j++){
            // cout<<char(i)<<" ";
            cout<<name<<" ";
        }
        cout<<endl;
    }

    cout<<"\nPrinting alphabate column wise:\n\n";
    for(int i=1; i<=5; i++){
        for(int j=1;j<=5; j++){
            char name = 'a'+(j-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }

    cout<<"\nSerially Digits printing: \n\n";
    int count = 1;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<count<<"    ";
            count += 1;
        }
        cout<<endl;
    }
}