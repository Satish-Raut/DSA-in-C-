

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void TOH(int n, int sour, int help, int dest){

    if(n == 1)
    {
        cout<<"Move disk "<<n<<" from "<<sour<<" to "<<dest<<endl;
        return;
    }

    TOH(n-1, sour, dest, help);
    cout<<"Move disk "<<n<<" from "<<sour<<" to "<<dest<<endl;
    TOH(n-1, help, sour, dest);
}

int main(){

    int n = 4;
    TOH(n, 1, 2, 3);
    cout<<"\nTotal moves: "<<pow(2, n)-1;
}