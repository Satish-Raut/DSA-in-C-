
#include<bits/stdc++.h>
using namespace std;

int main()
{

//map, multimap

    map<int, string>m;

    m.insert(make_pair(1, "Rahul"));
    m.insert(make_pair(2, "Jaipal"));
    m.insert(make_pair(3, "Satish"));
    m.insert(make_pair(4, "Omm"));
    m.insert(make_pair(3, "Parash"));
    m.insert(make_pair(5, "Banisha"));

    // cout<<m[5]<<" ";
    m[6] = "Parash";    //pair creation

    for(auto it = m.begin(); it != m.end(); it++)
    {
        cout<<it->first<<" -> "<<it->second<<endl;
    }

    cout<<endl;
    cout<<m.count(3);


    //erase
    m.erase(4);

    cout<<"\nAfter deleting an element: \n";
    for(auto it = m.begin(); it != m.end(); it++)
    {
        cout<<it->first<<" -> "<<it->second<<endl;
    }
}
