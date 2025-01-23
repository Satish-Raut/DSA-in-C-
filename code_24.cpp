#include<iostream>
using namespace std;

int main(){
    int i= 1,n;

    // cout<<"Enter the value of n = ";
    // cin>>n;
    // while(i<=10){
    //     cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    //     i++;
    // }
    // cout<<"DONE";

    // cout<<"\nFactor of ";
    // cin>>n;
    
    // while(i<=n){
    //     if(n%i == 0){
    //         cout<<i<<" ";
    //     }
    //     i++;
    // }

    cout<<"No. of Even numbers = ";
    cin>>n;
    int count = 1;

    while(count <= n){
        if(i % 2 ==0){
            cout<<i<<" ";
            count++;
        }
        i++;
    }

    
}