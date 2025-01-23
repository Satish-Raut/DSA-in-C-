

#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s = "lEetcOde";

    vector<int>lower(26);
    vector<int>upper(26);

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            lower[s[i]-'a']++;
            s[i] = '#';
        }
        else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            upper[s[i]-'A']++;
            s[i] = '#';
        }
    }

    string ans;
    //Upper
    //Upper
    for(int i=0; i<26; i++)
    {
        char c = i+'A';
        while(upper[i] > 0)
        {
            ans += c;
            upper[i]--;
        }
    }
    //Lower
    for(int i=0; i<26; i++)
    {
        char c = i+'a';
        while(lower[i]>0)
        {
            ans += c;
            lower[i]--;
        }
    }

    


    int first = 0, second = 0;
    while(second<ans.size())
    {
        if(s[first] == '#')
        {
            s[first] = ans[second];
            second++;
        }
        first++;
    }

    cout<<s;
    return 0;
        
}

