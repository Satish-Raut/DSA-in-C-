
//Using KMP algorithm


#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    string s = "roorsp";
    int n = s.size();

    //Reverse of the string
    string rev = s;
    // for(int i = n-1; i>=0; i--)
    // {
    //     rev += s[i];
    // }
    reverse(rev.begin(), rev.end());
    

    //Add dollar symbol
    string str = s + '$' + rev;
 

    //create LPS vector
    vector<int>lps(str.size(), 0);
    int pre = 0, suf = 1;

    while(suf < str.size())
    {
        if(str[pre] == str[suf])
        {
            lps[suf] = pre+1;
            suf++;
            pre++;
        }
        else
        {
            if(pre==0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
            {
                pre = lps[pre-1];
            }
        }
    }

    int ans = n - lps[str.size()-1];
    cout<<"The minimum number of characters to be added at the front : "<<ans<<endl;

    cout<<"The palindromic string is: ";
    string s2;
    for(int i = n-1; i>=n - ans; i--)
    {
        s2 += s[i];
    }
    cout<<s2 + s;

}   