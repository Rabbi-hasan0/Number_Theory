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

void cal()
{
    string s;
    int m,ans=0;
    cin>>s>>m;
    for(int i=0; i<s.size(); i++)
    {
      ans=ans*10+s[i]-'0';
      ans=ans%m;
    }
    if(ans%m==0)cout<<"YES"<<nn;
    else cout<<"NO"<<nn;
}

int main()
{
    fast();
    ll t;
    cin>>t;
    while(t--)
    {
        cal();
    }
    return 0;
}
