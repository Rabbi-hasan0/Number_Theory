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
// Prime number generate:
int prime[100001];
vector<int> v;
int sieve(int n)
{
    for(int i=2; i<=sqrt(n); i++)
    {
        for(int j=i*i; j<=n; j+=i)
            prime[j]=1;
    }

    for(int i=2; i<=n; i++)
    {
        if(prime[i]==0)
            v.push_back(i);
    }
}


/* Segmented sieve Calculate */
int cal( int l, int r,int a[],int mx)
{
    for(int p: v)
    {
        if(p*p<=r)
        {
            int i=(l/p)*p;
            if(i<l)i+=p;
            for( ; i<=r; i+=p)
            {
                if(i!=p)
                    a[i-l]=1;
            }
        }
    }

    // Print prime Number:
    for(int i=0; i<mx; i++)
    {
        if(a[i]==0)
            cout<<l+i<<' ';
    }
    cout<<nn;
}

int main()
{
    sieve(10000);// all prime number are decelerate;
    fast();
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        if(l==1)l++;

        int mx=r-l+1;  // array size calculation;
        int a[mx+1];
        for(int i=0; i<=mx; i++)a[i]=0;   // All the index make are zero;

        // called this function:
        cal(l,r,a,mx);

    }
    return 0;
}
