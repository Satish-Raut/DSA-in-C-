
#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);

    cout<<l.front()<<" "<<l.back()<<endl;
    cout<<l.size()<<endl;

    cout<<"Elements in List: ";
    for(auto it = l.begin(); it!= l.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\nElements of List in Reverse order: ";
    for(auto it = l.rbegin(); it!= l.rend(); it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;
    l.pop_front();
    l.pop_back();

    cout<<l.front()<<" "<<l.back()<<endl;
    cout<<l.size()<<endl;
}