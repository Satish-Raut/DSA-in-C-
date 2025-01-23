

#include<iostream>
using namespace std;

void anti_clockwise(string &s)
{
    char c = s[0];
    for(int i=1; i<=s.size()-1; i++)
    {
        s[i-1] = s[i];
    }

    s[s.size()-1] = c;
}

void clockwise(string &s)
{
    char c = s[s.size()-1];
    for(int i=0; i<=s.size()-2; i++)
    {
        s[i+1] = s[i];
    }

    s[0] = c;
}

int main(){
    string s1 = "amazon";
    string s2 = "azonam";
    string c_wise = s1, a_wise = s2;

    anti_clockwise(c_wise);
    anti_clockwise(c_wise);
    if(c_wise == s2)
    {
        cout<<"Ok";
    }
    return 0;
    





}