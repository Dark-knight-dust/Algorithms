#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

vector<int> Graph[N];
int vis[N]={0};

void dfs(int s)
{
  vis[s]=1;
  cout<<s<<", ";
  for(int x: Graph[s])
  {
    if (!vis[x])
      dfs(x);
  }
}

int main()
{
  int n,m;
  cin>>n>>m;
  for (int i=0;i<m;i++)
  {
    cin>>u>>v;
    Graph[u].push_back(v);
    Graph[v].push_back(u);
  }
  cout<<"DFS Traversal order:\n";
  dfs(1);
  return 0;
}
