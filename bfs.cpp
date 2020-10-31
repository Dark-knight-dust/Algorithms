#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

vector<int> Graph[N];
int vis[N]={0};

void bfs(int s)
{
  queue<int> q;
  q.push(s);
  while (!q.empty())
  {
    int v=q.front();
    q.pop();
    vis[v]=1;
    cout<<v<<", ";
    for (int x: Graph[v])
    {
      if (!vis[x])
        q.push(x);
    }
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
  cout<<"BFS Traversal order:\n";
  bfs(1);
  return 0;
}
