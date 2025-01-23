
// circular pattern matching

#include<iostream>
#include<vector>
using namespace std;

void find_lps(string &s, vector<int>&lps){
    
    int n = s.size();
    int pre = 0, suf = 1;
    while(suf<n)
    {
        if(s[pre] == s[suf])
        {
            lps[suf] = pre+1;
            pre++, suf++;
        }
        else
        {
            if(pre == 0)
            {
                suf++;
            }
            else{
                pre = lps[pre-1];
            }
        }
    }
}

int main(){

    string str1 = "cdeabroab";
    string str2 = "abcde";

    //create lps
    vector<int>lps(str2.size(), 0);
    find_lps(str2, lps);

    string str = str1 + str1;

    int first = 0, second = 0;

    while(second < str2.size() && first < str.size())
    {
        if(str[first] == str2[second])
        {
            first++;
            second++;
        }
        else
        {
            if(second == 0)
            {
                first++;
            }
            else{
                second = lps[second-1];
            }
        }
    }

    if(second == str2.size())
    {
        cout<<"Present";
    }
    else{
        cout<<"Not Present";
    }
    
}