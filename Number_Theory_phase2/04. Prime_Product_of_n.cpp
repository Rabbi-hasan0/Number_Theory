
// Sobgula prime number print korbe jader multiple korle N hobe sure...


#include<bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1;//cin >> t;
  while(t--){
    int n;cin >> n;

    vector<int> v;
    for(int i = 2; i * i <= n; i++){
       if(n % i == 0){
          while(n % i == 0){
             v.push_back(i);
             n /= i;
          }
       }
    }
    if(n > 1)v.push_back(n);
    for(auto x: v){
      cout << x << ' ';
    }cout << '\n';
  }
  return 0;
}
