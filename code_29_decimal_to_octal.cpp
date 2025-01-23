#include<iostream>
using namespace std;

int main(){
    cout<<"\nDecimal to Octal: \n\n";

    int num, rem, ans = 0, mul = 1;
    cout<<"Enter value of num = ";
    cin>>num;

    // while(num>0){
    //     rem = num % 8;
    //     num = num / 8;
    //     ans = rem * mul + ans;
    //     mul = mul * 10;
    // }
    // cout<<ans;

    cout<<"\nOctal to Decimal : \n\n";
    while(num>0){
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 8;
    }
    cout<<ans;
}   