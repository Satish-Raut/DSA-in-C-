#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(30);
    s.insert(60);
    s.insert(70);

cout<<"Set elements: ";
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout<<*it<<" ";
    }

   set<int, greater<int>>s1;

    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(70);

cout<<"\nSet elements in reverse Order: ";
    for(auto it = s1.begin(); it != s1.end(); it++)
    {
        cout<<*it<<" ";
    }

//find
    cout<<"\nFind 40: ";
    if(s1.find(40) != s1.end())
    {
        cout<<"present"<<endl;
    }
    else{
        cout<<"Absent\n";
    }
//count
    cout<<s1.count(30)<<endl;

//erase
    s1.erase(30);
    cout<<s1.count(30)<<endl;



}