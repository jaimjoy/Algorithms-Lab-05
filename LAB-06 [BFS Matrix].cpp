#include<bits/stdc++.h>
using namespace std;

void printGraph(int **M, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
}

void BFS(int **adj, int s, int n)
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

    while(!Q.empty()) //O(Vertex)
    {
        int u = Q.front();
        Q.pop();
        cout<<u<<" ";
        for(int v=0; v<n; v++)
        {
            if(adj[u][v] == 1 && visited[v] == 0)
            {
                visited[v] = 1;
                Q.push(v);
                dist[v] = dist[u]+1;
            }
        }
    }
    cout<<"\nDistance from "<<s<<" to \n";
    for(int i=0; i<n; i++)
    {
        cout<<i<<" : "<<dist[i]<<endl;
    }
}

int main()
{
    int n,m;
    ifstream fin("ug.txt");
    fin>>n>>m;
    int **M = new int* [n];
    for(int i=0; i<n; i++)
    {
        M[i] = new int[n];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            M[i][j] = 0;
        }
    }

    int u,v;
    for(int i=0; i<m; i++)
    {
        fin>>u>>v;
        M[u][v] = 1;
        M[v][u] = 1;
    }
    printGraph(M, n);
    cout<<endl;
    BFS(M, 0, n);

    return 0;
}
