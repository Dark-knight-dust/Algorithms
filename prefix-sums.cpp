#include<bits/stdc++.h>
using namespace std;

int main()
{
  //Answer queries in a range (no updates)!
  int n;
  cin>>n;
  int a[n],p[n];
  for (int i=0;i<n;i++)
    cin>>a[i];
  p[0]=a[0];
  for (int i=1;i<n;i++)
    p[i]=p[i-1]+a[i];
  int l,r;
  cin>>l>>r;
  if (l==0)
    cout<<p[r]<<'\n';
  else
    cout<<p[r]-p[l-1]<<'\n';
  return 0;
}
