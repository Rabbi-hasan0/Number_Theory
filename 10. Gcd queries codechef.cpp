#include<bits/stdc++.h>
#include <math.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#include<vector>
#define ll long long
#define lli long long int
#define nn "\n"
//#define mod 1000000007
ll mod =1e9;
using  namespace  std;
/*  let's started  */
#define N 5

ll gcd(ll a,ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{
    fast();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll a[n+1];
        for(ll i=1; i<=n; i++)cin>>a[i];

        ll pre[n+2];
        pre[0]=0;
        for(ll i=1; i<=n; i++)
            pre[i]=gcd(pre[i-1],a[i]);

        ll pos[n+2];
        pos[n+1]=0;
        for(ll i=n; i>=1; i--)
            pos[i]=gcd(pos[i+1],a[i]);


        while(q--)
        {
            ll l,r;
            cin>>l>>r;

            ll ans=gcd(pre[l-1],pos[r+1]);
            cout<<ans<<nn;
        }
    }
    return 0;
}
