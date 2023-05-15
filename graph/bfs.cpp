#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph{
    public:
        vector<int>bfs(int v,vector<int> a[])
        {
            vector<int> vis(v,0);
            queue<int> q;
            q.push(0);
            vis[0]=1;
            vector<int> bfs;
            while(!q.empty()){
                int node=q.front();
                q.pop();
                bfs.push_back(node);
                for(auto it:a[node]){
                    if(!vis[it]){
                        vis[it]=1;
                        q.push(it);
                    }
                }
            }
            return bfs;
        }        
};

void addedges(vector<int> a[],int u,int v)
{
    a[u].push_back(v);
    a[v].push_back(u);
}

void printbfs(vector<int> &a)
{
    int i;
    cout<<"BFS traversal will be like";
    for(i=0;i<a.size()-1;i++)
    {
        cout<<a[i]<<"->";
    }
    cout<<a[i];
}

int main()
{
    int n,m;
    cout<<"enter no of vertex and edges\n";
    cin>>n>>m;
    vector<int> a[m];
    vector<int> b;
    Graph ob;
    cout<<"Enter the edges";
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        addedges(a,u,v);
    }
    b=ob.bfs(m,a);
    printbfs(b);
    return 0;
}