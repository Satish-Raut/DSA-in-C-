
//Factorial

#include<iostream>
using namespace std;

int fact(int n){
    int ans;
    if(n == 1 || n == 0){
        return 1;
    }
    ans = n * fact(n-1);
    return ans;
}

int main(){

    int n = 6;
    if(n<0)
    {
        cout<<"number should be positive.";
        return 0;
    }
    cout<<fact(n);
}