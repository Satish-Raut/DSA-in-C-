
#include<bits/stdc++.h>
using namespace std;

int main()
{

//set, multiset, unordered_set, unordered_multiset

    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(20);
    s.insert(70);
    s.insert(80);

    cout<<"Elements of unordered set: ";
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout<<*it<<" ";
    }
}