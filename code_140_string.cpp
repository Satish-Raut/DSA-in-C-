

//Substrings of a string:

#include <iostream>
using namespace std;

int main() {
    string str = "ababc";
    int n = 0;
    
    // Calculate the length of the string manually
    while (str[n] != '\0') {
        ++n;
    }
    
    // Loop over each possible substring length
    for (int len = 1; len <= n; len++) {
        cout << "Substrings of length " << len << ":\n";
        // Loop over each starting position for a substring of this length
        for (int i = 0; i <= n - len; i++) {
            // Print the substring manually
            for (int j = 0; j < len; j++) {
                cout << str[i + j];
            }
            cout <<endl;
        }
    }

    return 0;
}
