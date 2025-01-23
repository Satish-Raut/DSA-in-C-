
#include<bits/stdc++.h>
using namespace std;

vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        
       vector<vector<int>> adj(N);
        
        for(int i=0; i<M; i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<int>dist(N, -1);
        vector<bool>visited(N, 0);
        
        queue<int>q;
        
        q.push(src);
        visited[src] = 1;
        dist[src] = 0;
        
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            
            for(int i=0; i<adj[node].size(); i++)
            {
                if(visited[adj[node][i]] == 1)
                {
                    continue;
                }
                
                visited[adj[node][i]] = 1;
                q.push(adj[node][i]);
                
                dist[adj[node][i]] = dist[node]+1;
            }
        }
        
        return dist;
    }


int main()
{
    
    int N = 6, M = 7, src = 0;
    vector<vector<int>> edges = {
        {0, 1}, {0, 2}, {1, 3}, {2, 4}, {3, 5}, {4, 5}, {1, 2}
    };
    
    vector<int> result = shortestPath(edges, N, M, src);
    
    for (int i = 0; i < result.size(); i++) {
        cout << "Shortest distance from node " << src << " to node " << i << " is: " << result[i] << endl;
    }
    
    return 0;
}