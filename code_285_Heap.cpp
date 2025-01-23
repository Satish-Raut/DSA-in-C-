
#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int>p;

    p.push(17);
    p.push(10);
    p.push(19);
    p.push(8);

cout<<"MaxHeap elements: ";
    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }

    priority_queue<int, vector<int>, greater<int>>pp;

    pp.push(17);
    pp.push(10);
    pp.push(19);
    pp.push(8);
cout<<"\nMinHeap element: ";
    while(!pp.empty())
    {
        cout<<pp.top()<<" ";
        pp.pop();
    }
    
}