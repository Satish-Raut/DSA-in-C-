
//Q. longest substring without repeated character
//(Using sliding window algorithm) or(Two pointer)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    string str = "ababc";
    int n = str.size();
    vector<bool>visit(256, 0);

    int first = 0, second = 0, len = 0;

    while(second<str.size())
    {
        while(visit[str[second]] == 1)
        {
            visit[str[first]]  = 0;
            first++;
        }

        visit[str[second]] = 1;
        len = max(len, second-first+1);
        second++;

    }

    cout<<len;
}