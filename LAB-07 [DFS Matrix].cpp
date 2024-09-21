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

void DFS(int **adj, int s, int n)
{
    stack<int> St;
    int *visited = new int[n];

    /// Distance not needed for DFS traversal
    //int *dist = new int[n];

    for(int i=0; i<n; i++)
    {
        visited[i] = 0;
        //dist[i] = 0;
    }
    St.push(s);
    visited[s] = 1;

    while(!St.empty())
    {
        int p = St.top();
        St.pop();
        cout<<p<<" ";
        for(int i=0; i<n; i++)
        {
            if(adj[p][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                St.push(i);
                //dist[i] = dist[p]+1;
            }
        }
    }
    /*cout<<"\nDistance from "<<s<<" to\n";
    for(int i=0; i<n; i++)
    {
        cout<<i<<" : ";
        cout<<dist[i]<<endl;
    }*/
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

    DFS(M, 0, n);
    cout<<endl;

    return 0;
}
