#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using  namespace  std;
/*  let's started  */
void sieve(int a[],int n)
{
    for(int i=2; i<=sqrt(n); i++)
    {
        if(a[i]==0)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                a[j]=1;
            }
        }
    }
    int c=0;
    for(int i=2; i<n+1; i++)
    {
        if(a[i]==0)
          cout<<i<<' ';

    }
    cout<<nn;
}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    memset(a,0,sizeof(a));

    sieve(a,n);

    return 0;
}
