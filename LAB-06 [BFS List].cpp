#include<bits/stdc++.h>
using namespace std;

void printGraph(const vector<int> *adj, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<i<<"-->";
        for(int j=0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}

void BFS(vector<int> *adj, int s, int n)
{
    queue<int> Q;
    int *dist = new int[n];
    int *visited = new int[n];
    for(int i=0; i<n; i++) //O(Edges)
    {
        dist[i] = 0;
        visited[i] = 0;
    }
    Q.push(s);
    visited[s] = 1;

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        cout<<u<<" ";
        for(int i=0; i<adj[u].size(); i++) //O(Vertex)
        {
            int neibour = adj[u][i];
            if(visited[neibour] == 0)
            {
                visited[neibour] = 1;
                Q.push(neibour);
                dist[neibour] = dist[u]+1;
            }
        }
    }
    cout<<"\nDistance from "<<s<<" to \n";
    for(int i=0; i<n; i++)
    {
        cout<<i<<" : ";
        cout<<dist[i]<<endl;
    }
}

int main()
{
    ifstream fin("ug.txt");
    int n,m;
    fin>>n>>m;
    vector<int> *adj = new vector<int> [n];
    int u,v;
    for(int i=0; i<m; i++)
    {
        fin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    printGraph(adj, n);
    BFS(adj,0,n); /// '0' means BFS starts from vertex '0'

    return 0;
}
