/* Using Binary Exponential */
#include<bits/stdc++.h>
#include <math.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#include<vector>
#define ll long long
#define lli long long int
#define nn "\n"
#define f(i,n) for(int i=0; i<n; i++)
#define mo 1000000007
#define N 101
ll mod =1e9;
ll a[N][N],I[N][N];
using  namespace  std;
/*  let's started  */
void mul(ll A[][N], ll B[N][N], ll n)
{
    ll R[n+1][n+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            R[i][j]=0;
            for(int k=1; k<=n; k++)
            {
                ll x=(A[i][k]*B[k][j]);
                R[i][j]=(R[i][j]+x);
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            A[i][j]=R[i][j];
        }
    }
}

void power(ll A[][N], ll n, ll p)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j)
                I[i][j]=1;
            else
                I[i][j]=0;
        }
    }
    while(p!=0)
    {
        if(p&1)
        {
            mul(I,A,n);
            p--;
        }
        else
        {
            mul(A,A,n);
            n/=2;
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            A[i][j]=I[i][j];
        }
    }
}
int main()
{
    fast();
    ll n,p;
    cin>>n>>p;
    for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cin>>a[i][j];
            }
        }
        power(a,n,p);


        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<nn;
        }

    return 0;
}
