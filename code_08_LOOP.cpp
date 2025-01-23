#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=5; i++){
        cout<<i<<"_"<<"Coder Army\n";
    }
    
    int n;
    cout<<"\nNow I want print the square of n numbers.\n";
    cout<<"Enter the value of n = ";
    
    cin>>n;
    for(int i = 1; i<=n;i++){
        cout<<i*i<<endl;
    }
    cout<< "\nNow i want to print the even number upto n nubers.\n";
    for(int i = 1; i<= n; i++){
        if(i%2 == 0){
            cout<<i<<endl;
        }
    }

}