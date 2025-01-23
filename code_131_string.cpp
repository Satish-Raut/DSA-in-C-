

#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s = "eabcabd";

    vector<int>alpha(26);

    for(int i=0; i<s.size(); i++)
    {
        int index = s[i]-'a';
        alpha[index]++;
    }

    string ans;
    for(int i=0; i<26; i++)
    {
        char c = 'a'+ i;
        while(alpha[i])
        {
            ans += c;
            alpha[i]--;
        }
    }

    cout<<ans;
    
}