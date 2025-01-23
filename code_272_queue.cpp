#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    int n = q.size();

    while(n--)
    {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }

    cout<<endl<<q.size();
}
