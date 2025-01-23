

#include<iostream>
using namespace std;

int main(){

    string s = "Hello World";
    int count = 0;
    bool counting = false;


    for(int i=s.size()-1; i>=0; i--)
    {
        if(s[i] != ' ')
        {
            count++;
            counting = true;
        }
        else if(counting){
            break;
        }
    }

    cout<<"Length of last word = "<<count;
}