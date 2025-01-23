
//N bit binary numbers

#include<iostream>
#include<vector>
using namespace std;

void find_Binary(int n, vector<string>& ans, string &temp, int zero, int one){
    if(temp.size() == n)
    {
        ans.push_back(temp);
        return;
    }

    if(zero < one)
    {
        temp.push_back('0');
        find_Binary(n, ans, temp, zero+1, one);
        temp.pop_back();
    }

    temp.push_back('1');
    find_Binary(n, ans, temp, zero, one+1);
    temp.pop_back();
}

int main(){

    int n = 4, zero = 0, one = 0;

    string temp;
    vector<string>ans;
    find_Binary(n, ans, temp, zero, one);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
