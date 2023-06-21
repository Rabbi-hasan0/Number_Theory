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
set<int>s;
int cnt(int n)
{
    int c=0;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            s.insert(n/i);
        }
    }
    return c;
}
void solved()
{
    int n;
    cin>>n;
    cnt(n);
    cout<<"Divisor Number: ";
    cout<<s.size()<<nn;

    for(auto it: s)
        cout<<it<<' ';
    cout<<nn;
}

int main()
{
    fast();
    solved();
    return 0;
}
