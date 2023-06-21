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

ll solved(ll m,ll n)
{
    ll res=1;
    while(n!=0)
    {
        if(n&1)
        {
            res=(res*m)%mod;
            n--;
        }
        else
        {
            m=(m*m)%mod;
            n/=2;
        }
    }
    return res;
}

int main()
{
    fast();
    ll n,m;
    cin>>m>>n;
    cout<<solved(m,n)<<nn;
    return 0;
}
