//TIme complexity: O(n(log(n)))

#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7;
int spf[N - 7];

int32_t main(){
  ios_base::sync_with_stdio(false);cin.tie(nullptr);
    for(int i = 2; i <= N; i++){
      spf[i] = i;
    }
    for(int i = 2; i <= N; i++){
      for(int j = i; j <= N; j += i){
        spf[j] = min(spf[j], i);
      }
    }
  int t;cin >> t;
  while(t--){
    int n;cin >> n;
    while(n > 1){
      cout << spf[n] << ' ';
      n /= spf[n];
    }cout << '\n';
  }
  return 0;
}
