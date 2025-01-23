
//Print values from 1 to n

#include<iostream>
using namespace std;

void print(int num, int n){    // Using 2 Arguments 

    if(num == n)
    {
        cout<<num;
        return;
    }
    cout<<num<<endl;
    print(num+1, n);
}

void Print(int num){       //Using 1 Argument

    if(num == 1)
    {
        cout<<1<<endl;
        return;
    }
    Print(num-1);
    cout<<num<<endl;
}

int main(){
    int n = 6;

    cout<<"numbers from 1 to "<<n<<" using 2 arguments: \n";
    print(1, n);
    cout<<"\nnumbers from 1 to "<<n<<" using 1 arguments: \n";
    Print(n);

}