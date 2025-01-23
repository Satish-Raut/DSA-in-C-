
//Recursions: 

#include<iostream>
using namespace std;

void fun(int n){
    cout<<n<<" Day left for birthday.\n";
    if(n==0)
    {
        cout<<"~~*~~ HAPPY BIRTHDAY ~~*~~";
        return;
    }
    fun(n-1);
}

void even(int n){
    if(n==0)
    {
        return;
    }
    if(n%2 == 0)
    {
        cout<<n<<endl;
    }
    even(n-1);
}

int main(){

    int n = 6;
    fun(n);

    int n1 = 10;
    cout<<"\nEven numbers: \n";
    even(n1);
}