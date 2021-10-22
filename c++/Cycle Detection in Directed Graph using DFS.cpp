#include<bits/stdc++.h>
using namespace std;
bool checkdirected(int node,vector<int>vis,vector<int>dfsv,vector<int>adj[])
{
    vis[node]=1;
    dfsv[node]=1;
    for(auto it:adj[node])
    {
        if(!vis[it])
        {
            if(checkdirected(it,vis,dfsv,adj))
            {
                return true;
            }
        }
        else if(dfsv[it])
        {
            return true;
        }
    }
    dfsv[node]=0;
    return false;
}
int main()
{
    int n,m;
    cout<<"Enter vertices";
    cin>>n;
    cout<<"Enter edges";
    cin>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    vector<int>vis(n,0);
    vector<int>dfsv(n,0);
    int flg=0;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            if(checkdirected(i,vis,dfsv,adj))
            {
                cout<<"Cycle detected";
                flg=1;
                return 0;
            }
        }
    }
    if(flg==0)
    {
        cout<<"No";
    }
}
