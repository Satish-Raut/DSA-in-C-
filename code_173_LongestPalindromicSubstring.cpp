#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> findAllSubstrings(const string &str) {
    vector<string> substrings;
    int n = str.length();

    for (int i = 0; i < n; ++i) 
    {
        for (int j = i + 1; j <= n; ++j) 
        {
            substrings.push_back(str.substr(i, j - i));
        }
    }

    return substrings;
}

bool check_palindrome(const string &str) {
    int start = 0, end = str.size() - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    string input = "babad";
    vector<string> substrings = findAllSubstrings(input);
    int len = 0;
    string ans;

    cout << "All Palindromic substrings of \"" << input << "\":" << endl;
    for (int i = 0; i < substrings.size(); i++) 
    {
        if (check_palindrome(substrings[i])) 
        {
            // cout << substrings[i] << " ";
            if(substrings[i].size()>len)
            {
                len = substrings[i].size();
                ans = substrings[i];
            }
        }
    }

    cout<<ans;
    

    return 0;
}
