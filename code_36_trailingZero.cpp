

//This code gives wrong output gor the bigger numbers.


#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int count_zero(int digit){
    int count = 0, rem;

    while(digit!=0){
        rem = digit % 10;
        digit /= 10;
        if(rem == 0){
            count++;
        }
        else{
            break;
        }
    }
    return count;
}

int main(){
    int num;
    cout<<"Enter a number = ";
    cin>>num;

    int f = factorial(num);
    cout<<f<<endl;
    cout<<count_zero(f);

}