#include<bits/stdc++.h>
using namespace std;

long long binary_exponentiation(long long x, long long y)
{
  long long r=1;
  while (y)
  {
    if (y&1)
      r=r*x;
    x=x*x;
    y>>=1;
  }
  return r;
}

int main()
{
  long long n, m;
  cin>>n>>m;
  cout<<"Result of (x^y) = "<<binary_exponentiation(n,m)<<'\n';
}
