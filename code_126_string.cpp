


#include<iostream>
using namespace std;

int main(){
    string s = "Satish";        // ['S', 'a', 't', 'i', 's', 'h', '\0']

//Reverse string:
    int start = 0, end = s.size()-1;

    while(start<end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }

    cout<<s<<endl;

//count characeter:
    int count = 0, i=0;
    while(s[i] != '\0')
    {
        count++;
        i++;
    }
    cout<<count;

}
