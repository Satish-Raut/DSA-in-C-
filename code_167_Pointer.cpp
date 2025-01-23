

#include<iostream>
using namespace std;

int main(){
    char c[] = "Gate2024";
    char *p = c;

    cout<<p<<endl;
    cout<<p+2<<endl;
    cout<< p + p[3] - p[1]; // 2024
}