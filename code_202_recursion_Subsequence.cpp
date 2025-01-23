
//Subsequence in striings:

#include<iostream>
#include<vector>
using namespace std;

void subsequence(string str, int index, int n, vector<string>& ans, string &temp) {
    if (index == n) {
        ans.push_back(temp);
        return;
    }

    // Not including the current element
    subsequence(str, index + 1, n, ans, temp);

    // Including the current element
    temp.push_back(str[index]);
    subsequence(str, index + 1, n, ans, temp);
    temp.pop_back();
}


int main(){

    string str = "abc";
    int n = str.size();
    vector<string> ans;
    string temp;

    subsequence(str, 0, n, ans, temp);

    // Output all subsequences using for loop
    for (int i = 0; i < ans.size(); i++) {
        cout << "{ " << ans[i] << " }" << endl;
    }

    return 0;
    

}
