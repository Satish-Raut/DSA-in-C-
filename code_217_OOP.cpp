
//Padding and Alignment

#include<iostream>
using namespace std;

class x{
    
    // int a;
    // char c;
    int a;  //4 byte
    double e;   //8 byte
    char d;    //1 byte 
    
};

int main(){

    x obj;
    cout<<sizeof(obj);
}