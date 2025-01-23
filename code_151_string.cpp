

//Q. finding the minimum number of characters to be added at the front to make a given string a palindrome 
// using a brute force approach:

#include <iostream>
#include <string>
using namespace std;

// Function to check if a given string is a palindrome
bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) 
    {
        if (s[left] != s[right]) 
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// Function to find the minimum number of characters to add to the front
int minCharsToAddFront(string str) {
    int n = str.length();

    // Start checking from the end of the string to progressively shorter prefixes
    for (int i = n - 1; i >= 0; i--) 
    {
        if (isPalindrome(str.substr(0, i + 1))) 
        {
            return n - (i + 1);
        }
    }
    return n - 1; // if not any substring is palindrome
}

int main() {
    string S = "ramoomst";
    cout << minCharsToAddFront(S) << endl; 
    return 0;
}
