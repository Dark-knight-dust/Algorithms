#include<bits/stdc++.h>
using namespace std;

long long fast_exponentiation(long long x, long long y, long long p)
{
  long long r=1;
  x=x%p;
  while (y)
  {
    if (y&1)
      r=(r*x)%p;
    x=(x*x)%p;
    y>>=1;
  }
  return r;
}

int main()
{
  long long n, m, p;
  cin>>n>>m>>p;
  cout<<"Result of (x^y) mod p = "<<fast_exponentiation(n,m,p)<<'\n';
}
