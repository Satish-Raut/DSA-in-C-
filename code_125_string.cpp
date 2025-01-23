
// Escape character: "\"

#include<iostream>
using namespace std;

int main(){

    string name = "my name is \"satish\" raut.";
    cout<<name<<endl;

    string s1 = "\\";
    cout<<"We are use the escape sequence character : "<<s1<<endl;

    string s2 = "Satish";
    string s3 = "Prakash";
    s2 = s2+"R";
    cout<<s2<<endl;
    
    s3 = s3+'R';
    cout<<s3<<endl;

    cout<<"Null character: "<<"\\0"<<endl;


}