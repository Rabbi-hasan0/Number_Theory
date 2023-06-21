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
        ll a,b;
        cin>>a>>b;
        cout<<gcd(a,b)<<nn;
    }
    return 0;
}
