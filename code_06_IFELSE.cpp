#include<iostream>
using namespace std;

int main(){
    // int salary;
    // cout<< "Enter the salary Amount = ";
    // cin>> salary;

    // if(salary>=1000){
    //     cout<< "Enough";
    // }
    // else{
    //     cout<< "Not Enough";
    // }
    // return 0;

    int age;
    cout<<"Enter your age = ";
    cin>>age;

    if(age<18){
        cout<<"Teenager";
    }
    else if(age == 18){
        cout<<"Now you are in the Adult state.";
    }
    else{
        cout<<"You are Adult.";
    }

}
