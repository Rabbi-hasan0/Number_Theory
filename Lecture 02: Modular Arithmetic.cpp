/* 
Here,
-> n is loacal number;
-> p is power of n;
-> m is modular digit to user input;

Example: (2^100)%5 =?
 -> For practice I would be given a sheet next lecture.
Given n,p,m and finding the value:
input:
2 100 5
output:
1

*/

#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define lli long long int
using namespace std;
lli m;
lli f(lli n,lli p)
{
    if(p==0) return 1;
    if(p%2==0)
    return ((f(n,p/2)%m)*(f(n,p/2)%m))%m;
    else
        return ((n%m)*(f(n,p-1)%m))%m;
}
int main()
{
    lli n,p;
    cin>>n>>p>>m;
    cout<<f(n,p)<<endl;
    return 0;
}
