
// String matching (Brute force approach)

#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1 = "onionionson";
    string s2 = "onions";
    int n1 = s1.size();
    int n2 = s2.size();
    
    int index = -1; // Initialize index to -1 to indicate no match found

    for (int i = 0; i <= n1-n2; i++) {
        int j = 0;

        while (j < n2 && s1[i + j] == s2[j]) 
        {
            j++;
        }
        if (j == n2) 
        {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "Possible at index " << index<<", "<<index+(n2-1) << endl;
    } else {
        cout << "Impossible" << endl;
    }

    return 0;
}
