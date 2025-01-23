
#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, string>m;

    m.insert(make_pair(1, "Rahul"));
    m.insert(make_pair(2, "Jaipal"));
    m.insert(make_pair(3, "Satish"));
    m.insert(make_pair(4, "Omm"));
    m.insert(make_pair(3, "Parash"));
    m.insert(make_pair(5, "Banisha"));

    m[6] = "Parash";

    for(auto it = m.begin(); it != m.end(); it++)
    {
        cout<<it->first<<" -> "<<it->second<<endl;
    }
    
}