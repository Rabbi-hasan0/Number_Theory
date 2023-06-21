#include<bits/stdc++.h>
#include <math.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#include<vector>
#define ll long long
#define lli long long int
#define nn "\n"
using  namespace  std;
/*  let's started  */

int main()
{
    fast();
    int n;
    while(scanf("%d", &n) == 1 && n)
    {
        cout<<n<<" : ";
        int ans=0;
        for(int i=2; i*i<=n; i++)
        {

            if(n%i==0)
            {
              ans++;
              while(n%i==0) n/=i;
            }
        }
        if(n>1)ans++;
        cout<<ans<<nn;
    }
    return 0;
}

