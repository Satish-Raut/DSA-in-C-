
//Q. longest substring without repeated character

#include <iostream>
using namespace std;

int main() {
    string str = "ababc";
    int n = str.size();
    
    int maxLength = 0;

    // Loop over each possible substring length
    for (int len = 1; len <= n; len++) {
        // Loop over each starting position for a substring of this length
        for (int i = 0; i <= n - len; i++) {
            bool visited[256] = {0};
            
            int j;
            for (j = 0; j < len; j++) {
                if (visited[(int)str[i + j]] == 1) {
                    break;
                }
                visited[(int)str[i + j]] = 1;
            }
            // Update maxLength if no duplicates were found
            if(j==len)
            {
                maxLength = len;
            }
            
        }
    }

    cout << "The length of the longest substring without repeated characters is: " << maxLength << endl;

    return 0;
}
