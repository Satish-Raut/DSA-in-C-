
//Sum of square of n natural number

#include<iostream>
using namespace std;

int SquareSum(int n){
    if(n == 1)
    {
        return 1;
    }
    return n*n + SquareSum(n-1);
}

int main(){
    int n = 5;
    // SquareSum(n);
    cout<<SquareSum(n);
}
