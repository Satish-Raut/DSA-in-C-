
//Print even numbers from 1 to n

#include<iostream>
using namespace std;

void print(int num, int n){    // Using 2 Arguments 

    if(num > n)
    {
        return;
    }
    if(num%2 == 0){
        cout<<num<<endl;
    }
    print(num+1, n);
}

void Print(int num){       //Using 1 Argument

    if(num == 2)
    {
        cout<<2<<endl;
        return;
    }
    Print(num-1);
    if(num%2 == 0){
        cout<<num<<endl;
    }
}

int main(){
    int n = 6;

    cout<<"Even numbers between 1 to "<<n<<" using 2 arguments: \n";
    print(1, n);
    cout<<"\nEven numbers between 1 to "<<n<<" using 1 arguments: \n";
    Print(n);

}