
//finding smallest window

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    string str = "AABBBCBBAC";
    vector<int>count(256, 0);
    int first = 0, second = 0,distinct = 0, len = str.size();

    while(first<len)
    {
        if(count[str[first]] == 0)
        {
            distinct++;
        }
        count[str[first]]++;
        first++;
    }

    for(int i=0; i<256; i++)
    {
        count[i] = 0;
    }
    first = 0;

    while(second < str.size())
    {
        while(distinct != 0 && second < str.size())
        {
            if(count[str[second]] == 0)
            {
                distinct--;
            }
            count[str[second]]++;
            second++;
        }

        len = min(len, second-first);

        while(distinct != 1)
        {
            len = min(len, second-first);
            count[str[first]]--;

            if(count[str[first]] == 0)
            {
                distinct++;
            }
            first++;
        }
    }

    cout<<len;
}