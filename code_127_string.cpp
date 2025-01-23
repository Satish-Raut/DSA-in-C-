
#include<iostream>
using namespace std;

int main(){

    string name = "Naman";
    int start = 0, end = name.size()-1  ;

    while(start<end)
    {
        if(name[start] != name[end])
        {
            cout<<"Not Palindrome.";
            return 0;
        }
        else
        {
            start++, end--;
        }
    }
    cout<<"Palindrome";
}
