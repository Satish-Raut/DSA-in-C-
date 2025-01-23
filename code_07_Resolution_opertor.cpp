// C++ program to show that we can access a global  
// variable using scope resolution operator :: when   
// there is a local variable with same name 

#include<iostream>
using namespace std;

//global variabele
int x = 6;

int main(){
    int x = 10;
    int y = 3;

    cout<<"To access the Global variable that has the same name of a local variable we use the 'Resolution Operator'"<<endl;
    cout << "Global Variable = "<< ::x << endl;
    cout << "Local Variable = "<< x << endl;
    cout << "Local Variable = " << y;
}