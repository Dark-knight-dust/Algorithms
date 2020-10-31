#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  if (n<2)
    cout<<n<<" is not a prime no.\n";
  else
  {
    bool flag=true;
    for (i=2;i<n;i++)
    {
      if (n%i==0)
      {
        flag=false;
        break;
      }
      if (flag)
        cout<<n<<" is a prime no.\n";
      else
        cout<<n<<" is not a prime no.\n";
    }
  }
  return 0;
}
