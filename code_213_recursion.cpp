
//  (JOSEPHUS PROBLEM)
//Predict the winner

#include<iostream>
#include<vector>
using namespace std;

int winner(int n, int k){

    if(n==1)
    {
        return 0;
    }
    return (winner(n-1, k)+k) % n;
}

int main(){

    int n = 5, k = 3;
    cout<<winner(n, k);
}