#include<iostream>
using namespace std;

int main(){

    int row, col;
    
    cout<<"\nReverse wise Row element printing:\n\n";
    cout<<"row = ";
    cin>>row;
    cout<<"col = ";
    cin>>col;

    for(row=1; row<=5; row++){
        for(col=row; col>=1; col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }

    cout<<"\nAlphabate element printing:\n\n";
    for(row=1; row<=5; row++){
        for(col = 1; col<=row; col++){
            char name = 'a'+(row-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }

    cout<<"\nReverse Star pattern printing:\n\n";
    for(row=1; row<=5; row++){
        for(col=1; col<=5-(row-1); col++){
            cout<<"* ";
        }
        cout<<endl;
    }

}