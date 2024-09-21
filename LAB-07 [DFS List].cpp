#include<bits/stdc++.h>
using namespace std;

void printGraph(vector<int> *adj, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<i<<"--->";
        for(int j=0; j<adj[i].size(); j++) cout<<adj[i][j]<<" ";
        cout<<endl;
    }
}

void DFS(const vector<int> *adj, int s, int n)
{
    stack<int> St;
    //int *dist =  new int[n];
    int *visited = new int[n];
    for(int i=0; i<n; i++)
    {
        //dist[i] = 0;
        visited[i] = 0;
    }
    St.push(s);
    visited[s] = 1;
    while(!St.empty())
    {
        int p = St.top();
        St.pop();
        cout<<p<<" ";
        for(int i=0; i<adj[p].size(); i++)
        {
            int neibour = adj[p][i];
            if(visited[neibour] == 0)
            {
                visited[neibour] = 1;
                St.push(neibour);
                //dist[neibour] = dist[p]+1;
            }
        }
    }
    cout<<endl;
    /*cout<<"\nDistance from "<<s<<" to \n";
    for(int i=0; i<n; i++)
    {
        cout<<i<<" : ";
        cout<<dist[i]<<endl;
    }*/
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
    DFS(adj, 0, n); /// '0' means DFS starts from vertex '0'

    return 0;
}
