

//Adjacency list of un-directed un-weighted graph


#include<iostream>
#include<vector>
using namespace std;

int main()
{

    int vertex, edge;
    cout<<"Enter the number of vertex and edge: ";
    cin>>vertex>>edge;

    vector<int>AdjList[vertex];
    int u, v;

    for(int i=0; i<edge; i++)
    {
        cout << "Path exist in-between: ";
        cin >> u >> v;

        AdjList[u].push_back(v);
        AdjList[v].push_back(u);

    }

    for(int i=0; i<vertex; i++)
    {
        cout<<i<<" --> ";
        for(int j=0; j<AdjList[i].size(); j++)
        {
            cout<<AdjList[i][j]<<" ";
        }
        cout<<"\n";
    }
}

