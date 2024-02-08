//Time complexity: --> O(n (log(n));

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> v;
bool check[N];

void find_prime(int n){
  for(int i = 2; i <= n; i++){
     if(!check[i]){
      v.push_back(i);
      for(int j = i + i; j <= n; j += i){
         check[j] = true;
      }
     }
  }
}

int32_t main(){
  ios_base::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1;//cin >> t;
  while(t--){
    int n;cin >> n;
    find_prime(n);
    for(auto x: v){
      cout << x << ' ';
    }cout << '\n';
  }
  return 0;
}
