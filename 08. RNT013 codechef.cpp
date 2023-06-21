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
void solved()
{
    ll n;
    cin>>n;
    set<ll>s;
    for(ll i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            s.insert(n/i);
        }
    }
    ll k,c=0,d=-1;
    cin>>k;
    for(auto it: s)
    {
      c++;
      if(c==k)
      {
        d=it;
        break;
      }
    }
    cout<<d<<nn;
}

int main()
{
    fast();
    solved();
    return 0;
}
