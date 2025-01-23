

//Adjacency list of un-directed weighted graph



#include<bits/stdc++.h>
using namespace std;

int main()
{

    int vertex, edge;
    cout<<"Enter the number of vertex and edge: ";
    cin>>vertex>>edge;

    vector<pair<int, int> >AdjList[vertex];
    int u, v, weight;

    for(int i=0; i<edge; i++)
    {
        cout << "Path exist in-between: ";
        cin >> u >> v >> weight;

        AdjList[u].push_back(make_pair(v, weight));
        AdjList[v].push_back(make_pair(u, weight));

    }

    for(int i=0; i<vertex; i++)
    {
        cout<<i<<" --> ";
        for(int j=0; j<AdjList[i].size(); j++)
        {
            cout<<'('<<AdjList[i][j].first<<", "<<AdjList[i][j].second<<')'<<" ";
        }
        cout<<"\n";
    }
}

