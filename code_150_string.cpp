
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "naman";

    int left = 0, right = str.length() - 1;
    while (left < right) 
    {
        if (str[left] != str[right]) 
        {
            cout<<"Not Palindrome";
            return 0;
        }
        left++;
        right--;
    }
    
    cout<<"Palindrome";
    return 0;

}