#include<iostream>
using namespace std;

int main(){
    int n, ans;
    cout<<"Enter the value of n = ";
    cin>>n;

    if(n==0)
        cout<<0;
    else{
        for(int i=1; i<=n; i++){
            if(i*i <=n){
                ans = i;
            }
            else{
                break;
            }
        }
        cout<<ans;
    }
}