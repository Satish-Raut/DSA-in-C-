#include<iostream>
using namespace std;

int main(){
    int i = 1, n;
    cout<<"Enter value of n = ";
    cin>>n;

    while(i<=n){
        if(i==3){
            i++;
            continue;
        }
        cout<<i<<" ";
        i++;
    }

    // for(i=1; i<=n; i++){
    //     if(i%3==0){
    //         continue;
    //     }
    //     cout<<i<<" ";
    // }
}