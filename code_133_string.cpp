#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s = "is2 sentence4 This1 a3";
    string temp;
    int count = 0, index = 0;

    // Initialize the ans vector with a size sufficient for all positions
    vector<string> ans(10);
    
    while (index < s.size()) 
    {
        if (s[index] == ' ') 
        {
            // Process the word when a space is encountered
            int pos = temp[temp.size() - 1] - '0'; // Get the digit
            temp.pop_back(); // Remove the digit
            ans[pos] = temp; // Store the word in its correct position
            temp.clear(); // Clear the temp for the next word
            count++;
        } 
        else 
        {
            temp += s[index];   //Finally temp contains "a3"
        }
        index++;
    }

    // Process the last word (since there is no trailing space)
    int pos = temp[temp.size() - 1] - '0';
    temp.pop_back();
    ans[pos] = temp;
    temp.clear();
    count++;

    // Accumulate the words in the correct order
    // string result;
    for (int i = 1; i <= count; i++) {
        temp += ans[i];
        temp += ' '; // Add a space between words
    }

    temp.pop_back(); // Removing the last space
    cout << temp << endl;

    return 0;
}
