#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int main()
{
  int sieve[N]={0};
  vector<int> primes;
  for (int i=2;i<N;i++)
  {
    if (!sieve[i])
    {
      primes.push_back(i);
      for (int j=i*i;j<N;j+=i)
        sieve[j]=1;
     }
  }
  cout<<"No. of primes below "<<N<<" are:\n";
  for (int x: primes)
    cout<<x<<", ";
}
