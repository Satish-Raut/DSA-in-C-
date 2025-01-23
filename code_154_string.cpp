
// Q. Repeated String Match: 
// Given two strings a and b, return the minimum number of times you should repeat string a so that string b is a substring of it. If it is impossible for b​​​​​​ to be a substring of a after repeating it, return -1.
// Notice: string "abc" repeated 0 times is "", repeated 1 time is "abc" and repeated 2 times is "abcabc".

// Example 1:

// Input: a = "abcd", b = "cdabcdab"
// Output: 3
// Explanation: We return 3 because by repeating a three times "abcdabcdabcd", b is a substring of it.
// Example 2:

// Input: a = "a", b = "aa"
// Output: 2


#include<iostream>
#include<vector>
#include<string>
using namespace std;

//Finding the lps
void find_lps(string &s, vector<int>&lps)
    {
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

//String matching
bool KMP_match(string &s1, string &s2)
{
    vector<int>lps(s2.size(), 0);
    find_lps(s2, lps);

    int first = 0, second = 0;
    while(second < s2.size() && first<s1.size())
    {
        if(s1[first] == s2[second])
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
            else
            {
                second = lps[second-1];
            }
        }
    }

    if(second == s2.size())
    {
        return 1;
    }
    else{
        return 0;
    }
}

//count the repeated string
int repeatedStringMatch(string a, string b) {
    
    if(a == b)
    {
        return 1;
    }

    int repeat = 1;
    string temp = a;

    while(temp.size() < b.size())   //make the size of string 'a' equal to the size of string 'b' 
    {
        temp += a;
        repeat++;
    }

    if(KMP_match(temp, b) == 1)
    {
        return repeat;
    }

    string temp2 = temp + a; 
    if(KMP_match(temp2, b) == 1)
    {
        return repeat+1;
    }

    return -1;
}

int main()
{
    string a = "abcd", b = "cdabcdab";
    cout<<repeatedStringMatch(a, b);

}