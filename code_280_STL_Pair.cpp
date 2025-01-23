
#include<bits/stdc++.h>
using namespace std;

int main()
{

//  name, age
    // pair<string, int>p;
    // p.first = "Satish";
    // p.second = 19;

    // cout<<p.first<<" ";
    // cout<<p.second<<" ";

    //name, title, age

    pair<pair<string, string>, int>p;
    // p = make_pair(make_pair("satish", "raut"), 19);

    p.first.first = "Satish";
    p.first.second = "Raut";
    p.second = 19;

    cout<<p.first.first<<" ";
    cout<<p.first.second<<" ";
    cout<<p.second<<" ";
}