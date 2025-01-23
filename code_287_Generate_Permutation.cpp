#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    
    // Sort the array to start with the lexicographically smallest permutation
    sort(arr.begin(), arr.end());
    
    // Print the first permutation
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Use a while loop to print the remaining permutations
    while (next_permutation(arr.begin(), arr.end())) {
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
