#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#include<vector>
#define ll long long
#define lli long long int
#define nn "\n"
using  namespace  std;
/*  let's started  */
int n=90000000;
int a[90000005];
vector<int>v;
void sieve()
{
    for(int i=3; i<=sqrt(n); i+=2)
    {
        if(a[i]==0)
        {
            for(int j=i*i; j<=n; j+=i+i)
            {
                a[j]=1;
            }
        }
    }
    v.push_back(2);
    for(int i=3; i<=n; i+=2)
    {
        if(a[i]==0)
        v.push_back(i);
    }
}
int main()
{
  fast();
  sieve();
  int t;cin>>t;
  while(t--)
  {
    int k;cin>>k;
    cout<<v[k-1]<<nn;
  }

    return 0;
}
