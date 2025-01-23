#include<iostream>
using namespace std;

int main(){
    int x = 97;
    // cout<<char(x);

    for(int i=65; i<=90; i++){
        cout<<char(i)<<" ";
    }
    cout<<"\n";
    for(int i=97; i<=122; i++){
        cout<<char(i)<<" ";
    }

    cout<<"\n";
    cout<<"\n";
    for(char i='A'; i<='Z'; i++){
        cout<<i<<" ";
    }
    cout<<"\n";
    for(char i='a'; i<='z'; i++){
        cout<<i<<" ";
    }

    cout<<"\n";
    cout<<"\n";
    for(int i=1; i<=100; i+=3){
        cout<< i <<" ";
    }


}
