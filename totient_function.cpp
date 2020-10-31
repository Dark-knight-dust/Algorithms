#include<bits/stdc++.h>
using namespace std;

int phi(int n)
{
  int r=n;
  for (int i=2;i*i<=n;i++)
  {
    if (n%i==0)
    {
      while (n%i==0)
        n/=i;
      r-=r/i;
    }
  }
  if (n>1)
    r-=r/n;
  return r;
}

int main()
{
  int n;
  cin>>n;
  cout<<"Value of n: "<<n<<'\n';
  cout<<"Value of phi(n): "<<phi(n)<<'\n';
  return 0;
}
