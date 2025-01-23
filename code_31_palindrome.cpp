#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n = ";
    cin>>n;

    int rem, num = n, ans = 0;
    while(num != 0){
        rem = num % 10;
        num /= 10;
        ans = ans * 10 + rem;
         
    }

    cout<<"Reversed number: "<<ans;

    return 0;
}
