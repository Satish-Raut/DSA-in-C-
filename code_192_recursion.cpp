
//Check Palindrome

#include<iostream>
using namespace std;

bool check_pal(string str, int start, int end){

    if(start>=end)
    {
        return 1;
    }

    if(str[start] != str[end])
    {
        return 0;
    }
    else{
        return check_pal(str, start+1, end-1);
    }
}

int main(){

    string str = "naman";
    if(check_pal(str, 0, 4))
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}