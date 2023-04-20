/* header file */
#include<bits/stdc++.h>
/* for faster cin cout */
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
/* sort function */
#define strsort() sort(s.begin(),s.end())
#define arrsort() int n1=sizeof(a)/sizeof(a[0]);sort(a,a+n1)
/* legth function */
#define strlen s.size()
#define arrlen int n1=sizeof(a)/sizeof(a[0])
#define intlen int n2=trunc(log10(n))+1
/* Conver function */
#define csti int csti=stoi(s)
/* Others Sortcut */
#define PI 3.1415926535897932384626433832795
#define nn "\n"
#define yes "YES"
#define no "NO"
#define elif else if
#define ll long long
/* testcase */
#define test() int t;cin>>t;while(t--)
using namespace std;
/*  let's started  */

/* Prime number algorithm  01 */
void solved()
{
    ll n;
    cin>>n;
    bool prime=true;
    if(n%2==0&&n!=2 || n<2) prime= false;
    /*for(ll i=3; i*i<=n; i+=2)*/
    for(ll i=3; i<=sqrt(n); i=i+2)
    {
        if(n%i==0)
            prime=false;
    }
    cout<<prime<<nn;
}
int main()
{
    fast();
    solved();
    return 0;
}


