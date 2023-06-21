#include<bits/stdc++.h>
#include <math.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#include<vector>
#define ll long long
#define lli long long int
#define nn "\n"
#define mo 1000000007
ll mod =1e9;
using  namespace  std;
/*  let's started  */
ll solved(ll n)
{
  ll ans=1;
  ll b=1378;
  while(n!=0)
  {
    if(n&1)
    {
      ans=(ans*b)%mod;
      n--;
    }
    else
    {
      b=(b*b)%mod;
      n/=2;
    }
  }
  return ans;
}

int main()
{
    fast();
    ll n;
    cin>>n;
    string s= to_string(solved(n));
    cout<<s[s.size()-1]<<nn;
    return 0;
}
