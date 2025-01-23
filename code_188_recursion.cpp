
//GCD of two number

#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0)
    {
        return a;
    }
    gcd(b, a%b);
}

int main(){

    int n1 = 18, n2 = 48;
    cout<<gcd(n1, n2);

} 
