
#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int count_zero(int digit){
    int q, count = 0;

    while(digit>=5){
        count += digit/5;
        digit /= 5; 
    }
    return count;
    
}

int main(){
    int num;
    cout<<"Enter a number = ";
    cin>>num;

    int f = factorial(num);
    cout<<"Factorial of "<<num<<" is "<<f<<endl;
    cout<<"Number of trailing zeros in factorial of "<<num<<" is "<<count_zero(num);

}