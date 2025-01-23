

#include<iostream>
using namespace std;

int main(){

    string ip = "1.1.1.1";
    for(int i=0; i<ip.size(); i++)
    {
        if(ip[i] == '.')
        {
            cout<<"[.]";
        }
        else{
            cout<<ip[i];
        }
    }
}