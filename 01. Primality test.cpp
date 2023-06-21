#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using  namespace  std;
/*  let's started  */
bool prime(int n)
{
  if(n%2==0&&n!=2 || n<2) return false;
    /*for(ll i=3; i*i<=n; i+=2)*/
    for(ll i=3; i<=sqrt(n); i=i+2)
    {
        if(n%i==0)
          return false;
    }
  return true;
}
int main()
{
  int n;
  while(cin>>n)
  {
    if(prime(n)==true)cout<<"Prime"<<nn;
    else cout<<"Not Prime"<<nn;
  }
}
